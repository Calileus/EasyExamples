#include <windows.h>
#include <commctrl.h>
#include <gdiplus.h>
#include <iostream>

#pragma comment(lib, "gdiplus.lib")

using namespace Gdiplus;

// Entry point for the program
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {
    // Initialize GDI+
    GdiplusStartupInput gdiplusStartupInput;
    ULONG_PTR gdiplusToken;
    GdiplusStartup(&gdiplusToken, &gdiplusStartupInput, nullptr);

    // Initialize common controls
    INITCOMMONCONTROLSEX icex;
    icex.dwSize = sizeof(icex);
    icex.dwICC = ICC_WIN95_CLASSES;
    InitCommonControlsEx(&icex);

    MessageBox(NULL, "Hello, Windows with GDI+!", "Greetings", MB_OK);
    
    // Cleanup GDI+
    GdiplusShutdown(gdiplusToken);
    
    std::cout << "This is a console output." << std::endl;
    return 0;
}
