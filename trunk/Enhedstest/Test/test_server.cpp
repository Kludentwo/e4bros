
//===============================================================
// ENHED       : Server
// CASE ID     : 1
// BESKRIVELSE : Test of connection with TCP
//===============================================================

void DataServer::update()
{
    socket = new QTcpSocket(this);

    socket->connectToHost("127.0.0.1", PORT);

    if (socket->waitForConnected(3000))
    {
//===============================================================
// ENHED       : Server
// CASE ID     : 2
// BESKRIVELSE : Test of sending data, split string, translate
//               LEVEL and save data to tekst file
//===============================================================

        qDebug() << "Connected!";

        int i = socket->write("Martha \0");
        qDebug() << i;
        socket->waitForBytesWritten(200);

        i = socket->write("2 \0");
        qDebug() << i;
        socket->waitForBytesWritten(200);

        i = socket->write("4 \0");
        qDebug() << i;
        socket->waitForBytesWritten(200);

        i = socket->write("1 \0");
        qDebug() << i;
        socket->waitForBytesWritten(200);

        i = socket->write("10 \0");
        qDebug() << i;
        socket->waitForBytesWritten(200);


        emit this->serverUpdateStatus(true);
        socket->close();
         qDebug()<<"byte send"<<endl;
    }
    else
    {
        qDebug() << "Didn't connect";

    }
}
