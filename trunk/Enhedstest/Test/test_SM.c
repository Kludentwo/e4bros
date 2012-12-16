//===============================================================
// ENHED       : SM
// CASE ID     : 1
// BESKRIVELSE : getLevel test.
//===============================================================

int retval = 0;
retval = getLevel;
LED_Control_Reg_Write(retval); 

//===============================================================
// ENHED       : SM
// CASE ID     : 3
// BESKRIVELSE : writeToVbte test med stub VBTE
//===============================================================

int retval = 0;
retval = writeToVbte(VBTE1Addr, 3);
CyDelay(500);
LED_Control_Reg_Write(retval); 
retval = writeToVbte(VBTE1Addr, 4);
CyDelay(500);
LED_Control_Reg_Write(retval); 
retval = writeToVbte(VBTE1Addr, VBTENIVEAU);
CyDelay(500);
LED_Control_Reg_Write(retval);
retval = writeToVbte(VBTE1Addr, TOPVENTIL);
CyDelay(500);
LED_Control_Reg_Write(retval);
retval = writeToVbte(VBTE1Addr, BUNDVENTIL);
CyDelay(500);
LED_Control_Reg_Write(retval);
retval = writeToVbte(VBTE1Addr, LUKVENTIL);
CyDelay(500);
LED_Control_Reg_Write(retval); 
retval = writeToVbte(VBTE1Addr, 9);
CyDelay(500);
LED_Control_Reg_Write(retval); */

//===============================================================
// ENHED       : SM
// CASE ID     : 4
// BESKRIVELSE : init test LED er sat gennem PSoC Creator 2.1
//===============================================================

init();

//===============================================================
// ENHED       : SM
// CASE ID     : 6
// BESKRIVELSE : convertToEnum test.
//===============================================================

int val = 2000;
		int i = 0;
		int res[200];
		for(i = 1; i < 201; i++){
			retval = convertToEnum(val+(17*i));
			res[i] = retval;
			}

//===============================================================
// ENHED       : SM
// CASE ID     : 7
// BESKRIVELSE : convertToValue test.
//===============================================================

int res[30];
		int i = 0;
		for(i = 0; i < 30; i++){
			convertToValue(i, &sm);
			res[i] = sm.vinkelVal;
		}

