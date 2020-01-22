#ifndef MAINVIEW_H
#define MAINVIEW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainView; }
QT_END_NAMESPACE

class QTcpServer;
class QTcpSocket;

class MainView : public QMainWindow
{
    Q_OBJECT

public:
    MainView(QWidget *parent = nullptr);
    ~MainView();

private slots:
    void on_btnStartServer_clicked();

    void on_btnEndServer_clicked();

private:
    Ui::MainView *ui;
    QTcpServer *m_server;
    QTcpSocket *m_socket;
    bool StartServer();
    void StopServer();
    void ExchangeData();
    void EchoReadData();
};
#endif // MAINVIEW_H
