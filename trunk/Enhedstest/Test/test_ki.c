// ===============================================================
// ENHED : KI
// CASE ID : 2
// BESKRIVELSE : Indsaetter vaerdier i structen og viser hvorledes de udskrives
// ===============================================================

//INDSAETTER I STRUCT
    status testStub;
    testStub.bagbordNiveau = 1;
    testStub.bagbordStatus = 2;
    testStub.level = 3;
    testStub.SecondsSinceLastGuiUpdate = 4;
    testStub.styrbordNiveau = 5;
    testStub.styrbordStatus = 6;
	
//UDSKRIVER STRUCT
	qDebug() << testStub.bagbordNiveau;
	qDebug() << testStub.styrbordNiveau;
	qDebug() << testStub.bagbordStatus;
	qDebug() << testStub.styrbordStatus;
	qDebug() << testStub.SecondsSinceLastGuiUpdate;
	qDebug() << testStub.level;
