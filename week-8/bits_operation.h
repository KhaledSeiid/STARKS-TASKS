#define SET_BIT(A,N) (A|=(1<<N)) 
#define CLEAR_BIT(A,N) (A&=~(1<<N))
#define GET_BIT(A,N) (1&(A>>N))
#define TOGGLE_BIT(A,N) (A^=(1<<N))