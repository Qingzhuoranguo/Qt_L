#include <QApplication>
#include <QLabel>


int main (int argc, char **argv){
    //define q application
    QApplication app(argc, argv);

    QLabel *label = new QLabel("Hello World");
    label->setWindowTitle("My App");
    label->resize(400,400);
    label->show();
    return app.exec();
}
