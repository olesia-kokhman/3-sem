#include "GameForm.h"
using namespace lab04;
int main() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew GameForm());
    return 0;
}