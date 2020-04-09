
/**************************************************************/
/*********     Author : Mawada Raafat      ********************/
/*********     Description : SET,CLR,TGL,and GET BIT **********/
/*********     Date :25 MARCH 2020         ********************/
/*********     Version : 1.0V              ********************/
/**************************************************************/


/**************************************************************/
/*********Gard of file will call on time in the c**************/
/**************************************************************/

#ifndef BIT_MATH_H
#define BIT_MATH_H


#define SET_BIT(local_u8Reg,local_u8BitNo) local_u8Reg|=(1<<local_u8BitNo)
#define CLR_BIT(local_u8Reg,local_u8BitNo) local_u8Reg&=~(1<<local_u8BitNo)
#define TGL_BIT(local_u8Reg,local_u8BitNo) local_u8Reg^=(1<<local_u8BitNo)
#define GET_BIT(local_u8Reg,local_u8BitNo) ((local_u8Reg>>local_u8BitNo)&(0x01))


#define conc(b7,b6,b5,b4,b3,b2,b1,b0)         conc_help(b7,b6,b5,b4,b3,b2,b1,b0)
#define conc_help(b7,b6,b5,b4,b3,b2,b1,b0)    0b##b7##b6##b5##b4##b3##b2##b1##b0





/**************************************************************/
/*********     Description : ERROR STATE   ********************/
/**************************************************************/



typedef enum{
	OK,
	NOK,
	NULL_POINTER,
	INDEX_OUT_OF_RANGE
	
	
}ErrorStatus;
	


#endif




