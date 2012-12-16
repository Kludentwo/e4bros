//===============================================================
// ENHED       : VBTE
// CASE ID     : 1
// BESKRIVELSE : SendBurst skal testes for at kontrollere 
//				 bredden af burst's. Kontrol via oscilloskop.
//===============================================================

CyDelay(500);
SendBurst();

//===============================================================
// ENHED       : VBTE
// CASE ID     : 2
// BESKRIVELSE : CalculateDistance skal testes for at kontrollere
//				 udregningen.
//===============================================================

int i;
int n = 100;
double result[n] = 0;
static uint32 BurstTimerVal = 0;
static uint32 DistanceTimerVal = 0;
for(i = 0; i < n; i++){
	BurstTimerVal = 1000*i;
	DistanceTimerVal = 1500*i;
	result[i] = CalculateDistance();
}

//===============================================================
// ENHED       : VBTE
// CASE ID     : 3
// BESKRIVELSE : ConvertMMtoPercent skal testes for at kontrollere
//				 udregningen.
//===============================================================

int i;
int n = 100;
uint8 result[n] = 0;
float distMM = 0;
for(i = 0; i < n; i++){
	distMM = 2.5*i;
	result[i] = ConvertMMtoPercent(distMM);
}

//===============================================================
// ENHED       : VBTE
// CASE ID     : 4
// BESKRIVELSE : ChangeState testes for om ventilerne aabner/lukker
//===============================================================

uint8 state[7] = {0,1,2,3,4,5,6};
int i;
int n = 7;
for(i = 0; i < n; i++){
	ChangeState(state[i]);
	CyDelay(500);
}

//===============================================================
// ENHED       : VBTE
// CASE ID     : 5
// BESKRIVELSE : I2C_handle kaldes og der ses paa displayet om de 
//			 	 rigtige vaerdier udskrives paa displayet.
//===============================================================

uint8 BufferSize = 8;
uint8 ReadBuffer[BufferSize];		
uint8 WriteBuffer[BufferSize];
uint8 DistancePercent = 23;
while(1){
	I2C_handle( WriteBuffer, ReadBuffer, BufferSize, DistancePercent );
}

//===============================================================
// ENHED       : VBTE
// CASE ID     : 6
// BESKRIVELSE : I2C_decode testes med 7 vaerdier. 4 som protokollen
//				 foreskriver og 3 uden for protokollen. Returvaerdien
//				 kontrolleres.
//===============================================================

uint8 BufferSize = 8;
uint8 ReadBuffer[BufferSize];		
uint8 WriteBuffer[BufferSize];
uint8 DistancePercent = 23;
while(1){
	I2C_handle( WriteBuffer, ReadBuffer, BufferSize, DistancePercent );
}

//===============================================================
// ENHED       : VBTE
// CASE ID     : 6
// BESKRIVELSE : I2C_decode testes med 7 vaerdier. 4 som protokollen
//				 foreskriver og 3 uden for protokollen. Returvaerdien
//				 kontrolleres.
//===============================================================

uint8 read[7] = {0,1,2,3,4,5,6};
uint8 result[7] = 0;
int i;
int n = 7;
for(i = 0; i < n; i++){
	result[i] = I2C_decode(read[i]);
	CyDelay(500);
}

//===============================================================
// ENHED       : VBTE
// CASE ID     : 7
// BESKRIVELSE : Init testes ved at kontrollere at 1 bliver returneret
//===============================================================

uint8 BufferSize = 8;
uint8 ReadBuffer[BufferSize];		
uint8 WriteBuffer[BufferSize];
uint8 result = 0;
result = init( ReadBuffer, WriteBuffer, BufferSize);






