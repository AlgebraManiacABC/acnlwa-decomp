/**
 * FUN_0029b76c.c
 * Source line: 340378
 * Body lines: 15
 */
void FUN_0029b76c(int param_1,int param_2)

{
  cro_container *cntnr;
  
  cntnr = *(cro_container **)(param_2 + 4);
  while (cntnr != NULL) {
    FUN_0013f000(param_2,cntnr);
    FUN_0013f134(param_1,cntnr);
    cntnr = *(cro_container **)(param_2 + 4);
  }
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 += 0xc;
  }
  FUN_0013f134(param_1 + 0xe4,param_2);
  return;
}
