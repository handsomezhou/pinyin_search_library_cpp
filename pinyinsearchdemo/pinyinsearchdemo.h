#ifndef PINYINSEARCHDEMO_H
#define PINYINSEARCHDEMO_H

#include <QWidget>
#include <QPushButton>
#include <QTextEdit>

class PinyinSearchDemo : public QWidget
{
    Q_OBJECT

public:
    PinyinSearchDemo(QWidget *parent = 0);
    ~PinyinSearchDemo();
private slots:
    void search();
private:
    QTextEdit *searchTextEdit;
    QPushButton *searchBtn;
};

#endif // PINYINSEARCHDEMO_H
