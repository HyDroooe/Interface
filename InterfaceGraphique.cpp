#include "pch.h"
#include "InterfaceGraphique.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(array<String^>^ args) {
    Application::SetCompatibleTextRenderingDefault(false);
    Application::EnableVisualStyles();
    Interface::InterfaceGraphique frm;
    Application::Run(% frm);
}
