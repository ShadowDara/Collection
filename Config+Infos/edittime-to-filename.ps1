# PowerShell-Skript: Rename files to include edit time (LastWriteTime) as prefix
$folderPath = Split-Path -Parent $MyInvocation.MyCommand.Definition
Set-Location $folderPath

# Regex-Muster für Datum im Format yyyy.MM.dd
$regex = '^\d{4}\.\d{2}\.\d{2} '

# Alle Dateien im aktuellen Ordner durchgehen
Get-ChildItem -File | ForEach-Object {
    $file = $_

    # Wenn der Name schon mit einem Datum beginnt, überspringen
    if ($file.Name -match $regex) {
        Write-Host "Übersprungen (bereits mit Datum): $($file.Name)"
        return
    }

    $editDate = $file.LastWriteTime.ToString("yyyy.MM.dd")
    
    # Neuen Dateinamen zusammensetzen
    $newName = "$editDate $($file.Name)"
    
    # Wenn der neue Name bereits existiert, nicht umbenennen
    if (-not (Test-Path -LiteralPath $newName)) {
        Rename-Item -LiteralPath $file.FullName -NewName $newName
        Write-Host "Renamed: $($file.Name) -> $newName"
    } else {
        Write-Warning "Datei existiert bereits: $newName - wird übersprungen"
    }
}
