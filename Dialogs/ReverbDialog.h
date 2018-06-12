#ifndef REVERBDIALOG_H
#define REVERBDIALOG_H

#include <QDialog>

#include "BASSFX/ReverbFX.h"


namespace Ui {
class ReverbDialog;
}

class ReverbDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ReverbDialog(QWidget *parent = 0, QList<ReverbFX *> reverbs = QList<ReverbFX *>());
    ~ReverbDialog();

    static bool isOpenned();

signals:
    void switchChanged(bool s);

protected:
    void showEvent(QShowEvent *);
    void closeEvent(QCloseEvent *);

private slots:
    void onSwitchChanged(bool sw);

    void connectAll();
    void disconnectAll();

    void onDialHFValueChanged(int value);
    void onSpinHFValueChanged(double value);

    void setInGain(int ing);
    void setReverbMix(int m);
    void setReverbTime(int t);
    void setHighFreqRTRatio(float hf);

    void on_btnReset_clicked();

private:
    Ui::ReverbDialog *ui;

    QList<ReverbFX *> reverbs;

    static bool openned;
};

#endif // REVERBDIALOG_H
