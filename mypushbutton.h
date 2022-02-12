#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H
#include <QDebug>
#include <QPushButton>

class MyPushButton : public QPushButton
{
    Q_OBJECT
public:
    explicit MyPushButton(QWidget *parent = nullptr);
    MyPushButton(std::string var);

signals:
  void my_click(QString);

private slots:
  void handler_std_click();

private:
  QString var;
};

#endif // MYPUSHBUTTON_H
