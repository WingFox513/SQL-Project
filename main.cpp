#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

   
    <Name of Project>::MyForm form;            //replace with name of Project(ex: project 12)
    Application::Run(% form);

    return 0;
}
