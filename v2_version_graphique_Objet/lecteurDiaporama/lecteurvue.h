#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QMainWindow>

namespace Ui {
class lecteurvue;
}

class lecteurvue : public QMainWindow
{
    Q_OBJECT

public:
    explicit lecteurvue(QWidget *parent = nullptr);
    ~lecteurvue();

private slots:
    void on_pushButton_4_clicked();

private slots:
    void on_pushButton_3_clicked();

private slots:
    void on_pushButton_clicked();

private slots:
    void on_pushButton_2_clicked();

private slots:
    void on_actionA_propos_de_triggered();

private:
    Ui::lecteurvue *ui;
};

#endif // LECTEURVUE_H
