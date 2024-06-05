#ifndef EMU_SC_PUS_SERVICE129_H_
#define EMU_SC_PUS_SERVICE129_H_

class EmuGSS_TCProgram129_1:public EmuGSS_TCProgram{

	 float sCVx;
	 float sCVy;

	virtual void BuildTCAppData(tc_descriptor_t &tc_descriptor);

public:

	EmuGSS_TCProgram129_1(uint32_t uniTime2YK,
                 const char * brief,float sCVx,float sCVy);


};

class EmuGSS_TCProgram129_2:public EmuGSS_TCProgram{

	 float sKpx;
	 float sKpy;

	virtual void BuildTCAppData(tc_descriptor_t &tc_descriptor);

public:

	EmuGSS_TCProgram129_2(uint32_t uniTime2YK,
                 const char * brief,float sKpx,float sKpy);


};


#endif /* EMU_SC_PUS_SERVICE129_H_ */
