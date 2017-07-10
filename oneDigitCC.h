/*  Displaying A No On A Single Digit Common Cathode Display  *\
*	             Scripted by Arunava Karmakar                    *
****************************************************************
*           Define A through G and DP as global variables      *
*             in the source code containing main()             *
*           		       Note:- DP not used                      *
*                             eg.:-                            *
*                 int A=0(wiringPi pin number)                 *
*                                                              *
*                                                              *
*                  Pin       |      CC_Display                 *
*           ---------------------------------------            *
*                   A        |           a                     *
*                   B        |           b                     *
*                   C        |           c                     *
*                   D        |           d                     *
*                   E        |           e                     *
*                   F        |           f                     *
*                   G        |           g                     *
*                  DP        |          dp                     *
*                                                              *
*                                                              *
*==============================================================*
*                                                              *
*                     g   f  gnd  a   b                        *
*                     |   |   |   |   |                        *
*                   --------------------                       *
*                   |                  |                       *
*                   |        a         |                       *
*                   |    ----------    |                       *
*                   |    |        |    |                       *
*                   |   f|        |b   |                       *
*                   |    |   g    |    |                       *
*                   |    ----------    |                       *
*                   |    |        |    |                       *
*                   |   e|        |c   |                       *
*                   |    |   d    |    |                       *
*                   |    ----------  o |                       *
*                   |               dp |                       *
*                   |                  |                       *
*                   --------------------                       *
*                     |   |   |   |  |                         *
*                     e   d  gnd  c  dp                        *
*                                                              *
*                                                              *
****************************************************************
                                                               */


extern int A;
extern int B;
extern int C;
extern int D;
extern int E;
extern int F;
extern int G;

int oneDigitCC();
