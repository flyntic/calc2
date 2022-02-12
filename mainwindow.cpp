#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton,&MyPushButton::my_click,this,&MainWindow::test);

    connect(ui->pushButton,&MyPushButton::my_click,this,[](QString var)
           {qDebug()<<"лямбда"<<var;} );

    /* Создаем строку для регулярного выражения */
 //    QString ipRange = "(?:[0-1]?[0-9]?[0-9]|2[0-4][0-9]|25[0-5])";
     /* Создаем регулярное выражение с применением строки, как
      * повторяющегося элемента */

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_eq_clicked()
{
    QString val=ui->lineEdit->text()+'=';
    std::string str=val.toStdString();
    int a;
    int b;
    enum actions {
            ADDITION = '+',
            SUBTRACTION = '-',
            MULTIPLICATION = '*',
            SEGMENTATION = '/'
        };
        std::string tmp = "";
        actions action;

        for (char i: str) {
            if (isdigit(i) || i == '.') {
                tmp += i;
            } else if (i == '/' || i == '*' || i == '+' || i == '-') {
                action = actions(i);
                a = std::stoi(tmp);
                tmp = "";
            } else if (i == '=') {
                b = std::stoi(tmp);
                switch (action) {
                    case ADDITION:
                        ui->lineEdit->setText(val + QString::number( a + b ));
                        break;
                    case SUBTRACTION:
                        ui->lineEdit->setText(val+  QString::number( a - b ));
                        break;
                    case MULTIPLICATION:
                        ui->lineEdit->setText(val+  QString::number( a * b ));
                        break;
                    case SEGMENTATION:
                        if (b!=0)
                        ui->lineEdit->setText(val+QString::number( a / b ));
                        break;
                }
            }
        }


}


void MainWindow::on_pushButton_7_clicked()
{
    QString val=ui->lineEdit->text();
    ui->lineEdit->setText(val+'7');
}


void MainWindow::on_pushButton_8_clicked()
{
    QString val=ui->lineEdit->text();
    ui->lineEdit->setText(val+'8');

}


void MainWindow::on_pushButton_9_clicked()
{
    QString val=ui->lineEdit->text();
    ui->lineEdit->setText(val+'9');

}


void MainWindow::on_pushButton_4_clicked()
{
    QString val=ui->lineEdit->text();
    ui->lineEdit->setText(val+'4');

}


void MainWindow::on_pushButton_5_clicked()
{
    QString val=ui->lineEdit->text();
    ui->lineEdit->setText(val+'5');

}


void MainWindow::on_pushButton_6_clicked()
{
    QString val=ui->lineEdit->text();
    ui->lineEdit->setText(val+'6');

}


void MainWindow::on_pushButton_1_clicked()
{
    QString val=ui->lineEdit->text();
    ui->lineEdit->setText(val+'1');

}


void MainWindow::on_pushButton_2_clicked()
{
    QString val=ui->lineEdit->text();
    ui->lineEdit->setText(val+'2');

}


void MainWindow::on_pushButton_3_clicked()
{
    QString val=ui->lineEdit->text();
    ui->lineEdit->setText(val+'3');

}


void MainWindow::on_pushButton_add_clicked()
{
    QString val=ui->lineEdit->text();
    ui->lineEdit->setText(val+'+');

}


void MainWindow::on_pushButton_subs_clicked()
{
    QString val=ui->lineEdit->text();
    ui->lineEdit->setText(val+'-');

}


void MainWindow::on_pushButton_multy_clicked()
{
    QString val=ui->lineEdit->text();
    ui->lineEdit->setText(val+'*');

}


void MainWindow::on_pushButton_div_clicked()
{
    QString val=ui->lineEdit->text();
    ui->lineEdit->setText(val+'/');

}


void MainWindow::on_pushButton_0_clicked()
{
    QString val=ui->lineEdit->text();
    ui->lineEdit->setText(val+'0');

}


void MainWindow::on_pushButton_00_clicked()
{
    QString val=ui->lineEdit->text();
    ui->lineEdit->setText(val+"00");

}


void MainWindow::on_toolButton_clicked()
{
    ui->lineEdit->clear();
}

void MainWindow::test(QString str)
{
    qDebug()<<str;
}

