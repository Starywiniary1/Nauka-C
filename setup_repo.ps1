$folders = @(
    "01_functions",
    "02_arrays_and_strings",
    "03_structs_and_enums",
    "04_pointers",
    "05_bitwise_operations",
    "06_memory",
    "07_preprocessor_and_headers",
    "08_modular_programming",
    "09_compilation_and_linking",
    "10_gdb_debugging",
    "11_make",
    "12_cmake",
    "13_testing",
    "14_embedded_c",
    "15_mini_projects"
)

foreach ($folder in $folders) {

    if (-not (Test-Path $folder)) {
        New-Item -ItemType Directory -Path $folder | Out-Null
        Write-Host "[CREATED] $folder"
    }

    $readmePath = Join-Path $folder "README.md"

    if (-not (Test-Path $readmePath)) {

        $title = $folder `
            -replace '^\d+_', '' `
            -replace '_', ' '

        @"
# $title

Exercises and notes from this stage of learning C.

## Exercises

Tasks will be added gradually.
"@ | Set-Content $readmePath
    }
}

Write-Host ""
Write-Host "Repository structure created successfully."