#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Button_0_clicked()
{
    ui->textEdit->insertPlainText("0");
}

void MainWindow::on_Button_9_clicked()
{
    ui->textEdit->insertPlainText("9");
}

void MainWindow::on_Button_8_clicked()
{
    ui->textEdit->insertPlainText("8");
}

void MainWindow::on_Button_7_clicked()
{
    ui->textEdit->insertPlainText("7");
}


void MainWindow::on_Button_6_clicked()
{
    ui->textEdit->insertPlainText("6");
}


void MainWindow::on_Button_5_clicked()
{
    ui->textEdit->insertPlainText("5");
}


void MainWindow::on_Button_4_clicked()
{
    ui->textEdit->insertPlainText("4");
}


void MainWindow::on_Button_3_clicked()
{
    ui->textEdit->insertPlainText("3");
}


void MainWindow::on_Button_2_clicked()
{
    ui->textEdit->insertPlainText("2");
}


void MainWindow::on_Button_1_clicked()
{
    ui->textEdit->insertPlainText("1");
}


void MainWindow::on_Button_plus_clicked()
{
    ui->textEdit->insertPlainText(" + ");
}


void MainWindow::on_Button_minus_clicked()
{
    ui->textEdit->insertPlainText(" - ");
}


void MainWindow::on_Button_star_clicked()
{
    ui->textEdit->insertPlainText(" * ");
}


void MainWindow::on_Button_slash_clicked()
{
    ui->textEdit->insertPlainText(" / ");
}


void MainWindow::on_Button_precentage_clicked()
{
    ui->textEdit->insertPlainText(" % ");
}


void MainWindow::on_Button_all_clear_clicked()
{
    ui->textEdit->clear();
}



