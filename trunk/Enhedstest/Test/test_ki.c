// ===============================================================
// ENHED : KI
// CASE ID : 2
// BESKRIVELSE : Indsætter værdier i structen. 
// ===============================================================
status styringsmodul::getStatus()
{
    status testStub;
    testStub.bagbordNiveau = 1;
    testStub.bagbordStatus = 2;
    testStub.level = 3;
    testStub.SecondsSinceLastGuiUpdate = 4;
    testStub.styrbordNiveau = 5;
    testStub.styrbordStatus = 6;
	
	qDebug() << testStub.bagbordNiveau;
	qDebug() << testStub.styrbordNiveau;
	qDebug() << testStub.bagbordStatus;
	qDebug() << testStub.styrbordStatus;
	qDebug() << testStub.SecondsSinceLastGuiUpdate;
	qDebug() << testStub.level;
    return testStub;
}