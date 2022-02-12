#include "mypushbutton.h"

MyPushButton::MyPushButton(QWidget *parent):QPushButton(parent)
{ var="adgg";
  connect(this,&QPushButton::clicked,this,&MyPushButton::handler_std_click);
}

void MyPushButton::handler_std_click()
{
  emit my_click(var);
  qDebug()<< var;
}

