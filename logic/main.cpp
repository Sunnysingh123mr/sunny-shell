#include "app_window.h"

int main(int argc, char **argv) {
    auto ui = AppWindow::create();

    // No logic here for now, just running the window
    ui->run();

    return 0;
}
