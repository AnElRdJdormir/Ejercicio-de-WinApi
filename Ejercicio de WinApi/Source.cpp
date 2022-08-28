#include <Windows.h>
#include "resource.h"

using namespace std;

HINSTANCE hInstGlob;
bool variable = false;
BOOL CALLBACK Vent1(HWND, UINT, WPARAM, LPARAM);

BOOL CALLBACK Vent2(HWND, UINT, WPARAM, LPARAM);

BOOL CALLBACK Vent3(HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK Vent32(HWND, UINT, WPARAM, LPARAM);

BOOL CALLBACK Vent4(HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK Vent42(HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK Vent43(HWND, UINT, WPARAM, LPARAM);

BOOL CALLBACK Vent5(HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK Vent52(HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK Vent53(HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK Vent54(HWND, UINT, WPARAM, LPARAM);

BOOL CALLBACK Vent6(HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK Vent62(HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK Vent63(HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK Vent64(HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK Vent65(HWND, UINT, WPARAM, LPARAM);

BOOL CALLBACK Vent7(HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK Vent72(HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK Vent73(HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK Vent74(HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK Vent75(HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK Vent76(HWND, UINT, WPARAM, LPARAM);

BOOL CALLBACK Vent82(HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK Vent83(HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK Vent84(HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK Vent85(HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK Vent86(HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK Vent87(HWND, UINT, WPARAM, LPARAM);

BOOL CALLBACK Vent93(HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK Vent94(HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK Vent95(HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK Vent96(HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK Vent97(HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK Vent98(HWND, UINT, WPARAM, LPARAM);

BOOL CALLBACK Vent104(HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK Vent105(HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK Vent106(HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK Vent107(HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK Vent108(HWND, UINT, WPARAM, LPARAM);
//BOOL CALLBACK Vent109(HWND, UINT, WPARAM, LPARAM);

BOOL CALLBACK Vent115(HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK Vent116(HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK Vent117(HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK Vent118(HWND, UINT, WPARAM, LPARAM);
//BOOL CALLBACK Vent119(HWND, UINT, WPARAM, LPARAM);

BOOL CALLBACK Vent126(HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK Vent127(HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK Vent128(HWND, UINT, WPARAM, LPARAM);
//BOOL CALLBACK Vent129(HWND, UINT, WPARAM, LPARAM);

BOOL CALLBACK Vent137(HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK Vent138(HWND, UINT, WPARAM, LPARAM);
//BOOL CALLBACK Vent139(HWND, UINT, WPARAM, LPARAM);

BOOL CALLBACK Vent148(HWND, UINT, WPARAM, LPARAM);
//BOOL CALLBACK Vent149(HWND, UINT, WPARAM, LPARAM);

//BOOL CALLBACK Vent159(HWND, UINT, WPARAM, LPARAM);


int WINAPI WinMain(HINSTANCE Hinst, HINSTANCE Pinst, PSTR cmd, int showCmd)
{

	HWND V1 = CreateDialog(hInstGlob, MAKEINTRESOURCE(DLG_VENT1), NULL, Vent1);

	MSG msg;
	ZeroMemory(&msg, sizeof(MSG));

	ShowWindow(V1, showCmd);

	while (GetMessage(&msg, NULL, NULL, NULL))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	return 0;
}

BOOL CALLBACK Vent1(HWND hwnd, UINT msg, WPARAM Wparam, LPARAM Lparam)
{
	switch (msg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(Wparam))
		{
		case BTN_PUSH:
		{
			EndDialog(hwnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT2), hwnd, Vent2);

			break;
		}
		case BTN_POP:
		{
			MessageBox(hwnd, L"No hay Botones que borrar", L"ERROR", MB_OK | MB_ICONERROR);
			break;
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(hwnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}


BOOL CALLBACK Vent2(HWND Hwnd, UINT Msg, WPARAM WParam, LPARAM LParam)
{
	switch (Msg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WParam))
		{
		case BTN_PUSH2:
		{
			EndDialog(Hwnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT3), Hwnd, Vent3);

			break;
		}
		case BTN_POP2:
		{
			if (IsDlgButtonChecked(Hwnd, CB_LIFO2) == BST_CHECKED)
			{
				EndDialog(Hwnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT1), Hwnd, Vent1);
			}

			if (IsDlgButtonChecked(Hwnd, CB_LIFO2) == BST_UNCHECKED)
			{
				EndDialog(Hwnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT1), Hwnd, Vent1);
			}
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(Hwnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}


BOOL CALLBACK Vent3(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH3:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT4), HWnd, Vent4);
			
			break;
		}
		case BTN_POP3:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO3) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT2), HWnd, Vent2);
			}
			if (IsDlgButtonChecked(HWnd, CB_LIFO3) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT32), HWnd, Vent32);
			}

		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent32(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH32:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT42), HWnd, Vent42);

			break;
		}
		case BTN_POP32:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO32) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT1), HWnd, Vent1);
			}
			if (IsDlgButtonChecked(HWnd, CB_LIFO32) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT1), HWnd, Vent1);
			}

		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}


BOOL CALLBACK Vent4(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH4:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT5), HWnd, Vent5);

			break;
		}
		case BTN_POP4:
		{

			if (IsDlgButtonChecked(HWnd, CB_LIFO4) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT3), HWnd, Vent3);
			}
			if (IsDlgButtonChecked(HWnd, CB_LIFO4) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT42), HWnd, Vent42);
			}
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent42(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH42:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT52), HWnd, Vent52);

			break;
		}
		case BTN_POP42:
		{

			if (IsDlgButtonChecked(HWnd, CB_LIFO42) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT32), HWnd, Vent32);
			}
			if (IsDlgButtonChecked(HWnd, CB_LIFO42) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT43), HWnd, Vent43);
			}
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent43(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH43:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT53), HWnd, Vent53);

			break;
		}
		case BTN_POP43:
		{

			if (IsDlgButtonChecked(HWnd, CB_LIFO43) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT1), HWnd, Vent1);
			}
			if (IsDlgButtonChecked(HWnd, CB_LIFO43) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT1), HWnd, Vent1);
			}
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}


BOOL CALLBACK Vent5(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH5:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT6), HWnd, Vent6);

			break;
		}
		case BTN_POP5:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO5) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT4), HWnd, Vent4);
			}
			if (IsDlgButtonChecked(HWnd, CB_LIFO5) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT52), HWnd, Vent52);
			}
			
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent52(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH52:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT62), HWnd, Vent62);

			break;
		}
		case BTN_POP52:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO52) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT42), HWnd, Vent42);
			}
			if (IsDlgButtonChecked(HWnd, CB_LIFO52) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT53), HWnd, Vent53);
			}

		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent53(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH53:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT63), HWnd, Vent63);

			break;
		}
		case BTN_POP53:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO53) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT43), HWnd, Vent43);
			}
			if (IsDlgButtonChecked(HWnd, CB_LIFO53) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT54), HWnd, Vent54);
			}

		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent54(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH54:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT64), HWnd, Vent64);

			break;
		}
		case BTN_POP54:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO54) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT1), HWnd, Vent1);
			}
			if (IsDlgButtonChecked(HWnd, CB_LIFO54) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT1), HWnd, Vent1);
			}

		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}


BOOL CALLBACK Vent6(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH6:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT7), HWnd, Vent7);

			break;
		}
		case BTN_POP6:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO6) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT5), HWnd, Vent5);
			}
			if (IsDlgButtonChecked(HWnd, CB_LIFO6) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT62), HWnd, Vent62);
			}

		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent62(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH62:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT72), HWnd, Vent72);

			break;
		}
		case BTN_POP62:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO62) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT52), HWnd, Vent52);
			}
			if (IsDlgButtonChecked(HWnd, CB_LIFO62) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT63), HWnd, Vent63);
			}

		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent63(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH63:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT73), HWnd, Vent73);

			break;
		}
		case BTN_POP63:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO63) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT53), HWnd, Vent53);
			}
			if (IsDlgButtonChecked(HWnd, CB_LIFO63) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT64), HWnd, Vent64);
			}

		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent64(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH64:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT74), HWnd, Vent74);

			break;
		}
		case BTN_POP64:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO64) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT54), HWnd, Vent54);
			}
			if (IsDlgButtonChecked(HWnd, CB_LIFO64) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT65), HWnd, Vent65);
			}

		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent65(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH65:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT75), HWnd, Vent75);

			break;
		}
		case BTN_POP65:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO65) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT1), HWnd, Vent1);
			}
			if (IsDlgButtonChecked(HWnd, CB_LIFO65) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT1), HWnd, Vent1);
			}

		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}


BOOL CALLBACK Vent7(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH7:
		{
			
			MessageBox(HWnd, L"Hasta aqui solo se puede", L"LIMITE", MB_OK | MB_ICONERROR);
			break;
		}
		case BTN_POP7:
		{			
			if (IsDlgButtonChecked(HWnd, CB_LIFO7) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT6), HWnd, Vent6);
			}
		
			if (IsDlgButtonChecked(HWnd, CB_LIFO7) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT72), HWnd, Vent72);
			}
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent72(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH72:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT82), HWnd, Vent82);
			break;
		}
		case BTN_POP72:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO72) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT62), HWnd, Vent62);
			}

			if (IsDlgButtonChecked(HWnd, CB_LIFO72) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT73), HWnd, Vent73);
			}
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent73(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH73:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT83), HWnd, Vent83);
			break;
		}
		case BTN_POP73:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO73) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT63), HWnd, Vent63);
			}

			if (IsDlgButtonChecked(HWnd, CB_LIFO73) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT74), HWnd, Vent74);
			}
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent74(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH74:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT84), HWnd, Vent84);
			break;
		}
		case BTN_POP74:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO74) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT64), HWnd, Vent64);
			}

			if (IsDlgButtonChecked(HWnd, CB_LIFO74) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT75), HWnd, Vent75);
			}
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent75(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH75:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT85), HWnd, Vent85);
			break;
		}
		case BTN_POP75:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO75) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT65), HWnd, Vent65);
			}

			if (IsDlgButtonChecked(HWnd, CB_LIFO75) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT76), HWnd, Vent76);
			}
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent76(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH76:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT86), HWnd, Vent86);
			break;
		}
		case BTN_POP76:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO76) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT1), HWnd, Vent1);
			}

			if (IsDlgButtonChecked(HWnd, CB_LIFO76) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT1), HWnd, Vent1);
			}
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}


BOOL CALLBACK Vent82(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH82:
		{

			MessageBox(HWnd, L"Hasta aqui solo se puede", L"LIMITE", MB_OK | MB_ICONERROR);
			break;
		}
		case BTN_POP82:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO82) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT72), HWnd, Vent72);
			}

			if (IsDlgButtonChecked(HWnd, CB_LIFO82) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT83), HWnd, Vent83);
			}
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent83(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH83:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT93), HWnd, Vent93);
			break;
		}
		case BTN_POP83:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO83) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT73), HWnd, Vent73);
			}

			if (IsDlgButtonChecked(HWnd, CB_LIFO83) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT84), HWnd, Vent84);
			}
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent84(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH84:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT94), HWnd, Vent94);
			break;
		}
		case BTN_POP84:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO84) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT74), HWnd, Vent74);
			}

			if (IsDlgButtonChecked(HWnd, CB_LIFO84) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT85), HWnd, Vent85);
			}
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent85(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH85:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT95), HWnd, Vent95);
			break;
		}
		case BTN_POP85:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO85) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT75), HWnd, Vent75);
			}

			if (IsDlgButtonChecked(HWnd, CB_LIFO85) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT86), HWnd, Vent86);
			}
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent86(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH86:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT96), HWnd, Vent96);
			break;
		}
		case BTN_POP86:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO86) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT76), HWnd, Vent76);
			}

			if (IsDlgButtonChecked(HWnd, CB_LIFO86) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT87), HWnd, Vent87);
			}
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent87(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH87:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT97), HWnd, Vent97);
			break;
		}
		case BTN_POP87:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO87) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT1), HWnd, Vent1);
			}

			if (IsDlgButtonChecked(HWnd, CB_LIFO86) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT1), HWnd, Vent1);
			}
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}


BOOL CALLBACK Vent93(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH93:
		{
			MessageBox(HWnd, L"Hasta aqui solo se puede", L"LIMITE", MB_OK | MB_ICONERROR);
			break;
		}
		case BTN_POP93:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO93) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT83), HWnd, Vent83);
			}

			if (IsDlgButtonChecked(HWnd, CB_LIFO93) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT94), HWnd, Vent94);
			}
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent94(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH94:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT104), HWnd, Vent104);
			break;
		}
		case BTN_POP94:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO94) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT84), HWnd, Vent84);
			}

			if (IsDlgButtonChecked(HWnd, CB_LIFO94) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT95), HWnd, Vent95);
			}
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent95(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH95:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT105), HWnd, Vent105);
			break;
		}
		case BTN_POP95:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO95) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT85), HWnd, Vent85);
			}

			if (IsDlgButtonChecked(HWnd, CB_LIFO95) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT96), HWnd, Vent96);
			}
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent96(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH96:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT106), HWnd, Vent106);
			break;
		}
		case BTN_POP96:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO96) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT86), HWnd, Vent86);
			}

			if (IsDlgButtonChecked(HWnd, CB_LIFO96) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT97), HWnd, Vent97);
			}
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent97(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH97:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT107), HWnd, Vent107);
			break;
		}
		case BTN_POP97:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO97) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT87), HWnd, Vent87);
			}

			if (IsDlgButtonChecked(HWnd, CB_LIFO97) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT98), HWnd, Vent98);
			}
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent98(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH98:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT108), HWnd, Vent108);
			break;
		}
		case BTN_POP98:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO98) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT1), HWnd, Vent1);
			}

			if (IsDlgButtonChecked(HWnd, CB_LIFO98) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT1), HWnd, Vent1);
			}
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}


BOOL CALLBACK Vent104(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH104:
		{
			MessageBox(HWnd, L"Hasta aqui solo se puede", L"LIMITE", MB_OK | MB_ICONERROR);
			break;
		}
		case BTN_POP104:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO104) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT94), HWnd, Vent94);
			}

			if (IsDlgButtonChecked(HWnd, CB_LIFO104) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT115), HWnd, Vent115);
			}
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent105(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH105:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT115), HWnd, Vent115);
			break;
		}
		case BTN_POP105:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO105) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT95), HWnd, Vent95);
			}

			if (IsDlgButtonChecked(HWnd, CB_LIFO105) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT126), HWnd, Vent126);
			}
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent106(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH106:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT116), HWnd, Vent116);
			break;
		}
		case BTN_POP106:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO106) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT96), HWnd, Vent96);
			}

			if (IsDlgButtonChecked(HWnd, CB_LIFO106) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT127), HWnd, Vent127);
			}
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent107(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH107:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT117), HWnd, Vent117);
			break;
		}
		case BTN_POP107:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO107) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT97), HWnd, Vent97);
			}

			if (IsDlgButtonChecked(HWnd, CB_LIFO107) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT128), HWnd, Vent128);
			}
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent108(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH108:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT118), HWnd, Vent118);
			break;
		}
		case BTN_POP108:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO108) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT98), HWnd, Vent98);
			}

			if (IsDlgButtonChecked(HWnd, CB_LIFO108) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT2), HWnd, Vent2);
			}
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}


BOOL CALLBACK Vent115(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH115:
		{
			MessageBox(HWnd, L"Hasta aqui solo se puede", L"LIMITE", MB_OK | MB_ICONERROR);
			break;
		}
		case BTN_POP115:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO115) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT105), HWnd, Vent105);
			}

			if (IsDlgButtonChecked(HWnd, CB_LIFO115) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT116), HWnd, Vent126);
			}

		}
		}
		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent116(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH116:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT126), HWnd, Vent126);
			break;
		}
		case BTN_POP116:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO116) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT106), HWnd, Vent106);
			}

			if (IsDlgButtonChecked(HWnd, CB_LIFO116) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT117), HWnd, Vent137);
			}
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent117(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH117:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT127), HWnd, Vent127);
			break;
		}
		case BTN_POP117:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO117) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT107), HWnd, Vent107);
			}

			if (IsDlgButtonChecked(HWnd, CB_LIFO117) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT118), HWnd, Vent138);
			}
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent118(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH118:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT128), HWnd, Vent128);
			break;
		}
		case BTN_POP118:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO118) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT108), HWnd, Vent108);
			}

			if (IsDlgButtonChecked(HWnd, CB_LIFO118) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT3), HWnd, Vent3);
			}
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent126(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH126:
		{
			MessageBox(HWnd, L"Hasta aqui solo se puede", L"LIMITE", MB_OK | MB_ICONERROR);
			break;
		}
		case BTN_POP126:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO126) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT116), HWnd, Vent116);
			}

			if (IsDlgButtonChecked(HWnd, CB_LIFO126) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT127), HWnd, Vent127);
			}
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent127(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH127:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT137), HWnd, Vent137);
			break;
		}
		case BTN_POP127:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO127) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT117), HWnd, Vent117);
			}

			if (IsDlgButtonChecked(HWnd, CB_LIFO127) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT128), HWnd, Vent128);
			}
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent128(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH128:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT138), HWnd, Vent138);
			break;
		}
		case BTN_POP128:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO128) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT118), HWnd, Vent118);
			}

			if (IsDlgButtonChecked(HWnd, CB_LIFO128) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT4), HWnd, Vent4);
			}
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent137(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH137:
		{
			MessageBox(HWnd, L"Hasta aqui solo se puede", L"LIMITE", MB_OK | MB_ICONERROR);
			break;
		}
		case BTN_POP137:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO137) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT127), HWnd, Vent127);
			}

			if (IsDlgButtonChecked(HWnd, CB_LIFO137) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT138), HWnd, Vent138);
			}
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent138(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH138:
		{
			EndDialog(HWnd, 0);
			DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT148), HWnd, Vent148);
			break;
		}
		case BTN_POP138:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO138) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT128), HWnd, Vent128);
			}

			if (IsDlgButtonChecked(HWnd, CB_LIFO128) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT5), HWnd, Vent5);
			}
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}

BOOL CALLBACK Vent148(HWND HWnd, UINT MSg, WPARAM WPAram, LPARAM LPAram)
{
	switch (MSg)
	{

	case WM_COMMAND:
	{
		switch (LOWORD(WPAram))
		{
		case BTN_PUSH148:
		{
			MessageBox(HWnd, L"Hasta aqui solo se puede", L"LIMITE", MB_OK | MB_ICONERROR);
			break;
		}
		case BTN_POP148:
		{
			if (IsDlgButtonChecked(HWnd, CB_LIFO148) == BST_CHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT138), HWnd, Vent138);
			}

			if (IsDlgButtonChecked(HWnd, CB_LIFO148) == BST_UNCHECKED)
			{
				EndDialog(HWnd, 0);
				DialogBox(NULL, MAKEINTRESOURCE(DLG_VENT6), HWnd, Vent6);
			}
		}
		}

		break;
	}
	case WM_CLOSE:
	{
		DestroyWindow(HWnd);
		PostQuitMessage(0);
		break;
	}

	}
	return false;
}