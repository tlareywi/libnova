#include "lunar-priv.h"
const struct earth_pert  elp5[] = {
{0.000000, {0.000000, 0.000000, 1.000000, -3.000000}, 180.000000, 0.000210, 0.037000},
{0.000000, {0.000000, 0.000000, 1.000000, -1.000000}, 0.000000, 0.000560, 5.997000},
{0.000000, {0.000000, 0.000000, 1.000000, 1.000000}, 0.000000, 0.000470, 0.037000},
{0.000000, {0.000000, 0.000000, 2.000000, -3.000000}, 0.000000, 0.000040, 0.073000},
{0.000000, {0.000000, 0.000000, 2.000000, -1.000000}, 180.000000, 0.001440, 0.076000},
{0.000000, {0.000000, 0.000000, 2.000000, 1.000000}, 0.000000, 0.000030, 0.025000},
{0.000000, {0.000000, 0.000000, 3.000000, -1.000000}, 180.000000, 0.000070, 0.038000},
{0.000000, {0.000000, 1.000000, -1.000000, -1.000000}, 180.000000, 0.000020, 0.039000},
{0.000000, {0.000000, 1.000000, -1.000000, 1.000000}, 180.000000, 0.000020, 0.857000},
{0.000000, {0.000000, 1.000000, 0.000000, -1.000000}, 180.000000, 0.000040, 0.081000},
{0.000000, {0.000000, 1.000000, 0.000000, 1.000000}, 180.000000, 0.000040, 0.069000},
{0.000000, {0.000000, 1.000000, 1.000000, -1.000000}, 180.000000, 0.000010, 1.200000},
{0.000000, {0.000000, 1.000000, 1.000000, 1.000000}, 180.000000, 0.000020, 0.036000},
{0.000000, {1.000000, 0.000000, 0.000000, -1.000000}, 180.000000, 0.000040, 0.949000},
{0.000000, {1.000000, 0.000000, 0.000000, 1.000000}, 180.000000, 0.000050, 0.039000},
{0.000000, {1.000000, 1.000000, -1.000000, -1.000000}, 0.000000, 0.000010, 0.075000},
{0.000000, {1.000000, 1.000000, -1.000000, 1.000000}, 0.000000, 0.000010, 0.074000},
{0.000000, {1.000000, 1.000000, 0.000000, -1.000000}, 180.000000, 0.000030, 18.600000},
{0.000000, {1.000000, 1.000000, 0.000000, 1.000000}, 180.000000, 0.000030, 0.037000},
{0.000000, {2.000000, -1.000000, -1.000000, -1.000000}, 0.000000, 0.000030, 0.340000},
{0.000000, {2.000000, -1.000000, -1.000000, 1.000000}, 0.000000, 0.000040, 0.042000},
{0.000000, {2.000000, -1.000000, 0.000000, -1.000000}, 180.000000, 0.000060, 0.097000},
{0.000000, {2.000000, 0.000000, -2.000000, -1.000000}, 180.000000, 0.000050, 0.066000},
{0.000000, {2.000000, 0.000000, -2.000000, 1.000000}, 180.000000, 0.000210, 0.086000},
{0.000000, {2.000000, 0.000000, -1.000000, -1.000000}, 0.000000, 0.001260, 0.515000},
{0.000000, {2.000000, 0.000000, -1.000000, 1.000000}, 0.000000, 0.001080, 0.040000},
{0.000000, {2.000000, 0.000000, 0.000000, -3.000000}, 0.000000, 0.000040, 0.064000},
{0.000000, {2.000000, 0.000000, 0.000000, -1.000000}, 180.000000, 0.002170, 0.088000},
{0.000000, {2.000000, 0.000000, 0.000000, 1.000000}, 0.000000, 0.000130, 0.026000},
{0.000000, {2.000000, 0.000000, 1.000000, -3.000000}, 0.000000, 0.000030, 0.440000},
{0.000000, {2.000000, 0.000000, 1.000000, -1.000000}, 180.000000, 0.000080, 0.041000},
{0.000000, {2.000000, 0.000000, 2.000000, -1.000000}, 180.000000, 0.000020, 0.026000},
{0.000000, {2.000000, 1.000000, -1.000000, -1.000000}, 180.000000, 0.000010, 1.063000},
{0.000000, {2.000000, 1.000000, 0.000000, -1.000000}, 0.000000, 0.000090, 0.081000},
{0.000000, {2.000000, 2.000000, 0.000000, -1.000000}, 0.000000, 0.000010, 0.075000},
{0.000000, {4.000000, 0.000000, -2.000000, 1.000000}, 0.000000, 0.000030, 0.027000},
{0.000000, {4.000000, 0.000000, -1.000000, -1.000000}, 0.000000, 0.000010, 0.044000},
{0.000000, {4.000000, 0.000000, -1.000000, 1.000000}, 0.000000, 0.000020, 0.020000},
{0.000000, {4.000000, 0.000000, 0.000000, -1.000000}, 180.000000, 0.000010, 0.028000},
{1.000000, {-6.000000, 0.000000, 0.000000, 0.000000}, 0.000760, 0.000020, 0.016000},
{1.000000, {-6.000000, 0.000000, 1.000000, 0.000000}, 0.000750, 0.000050, 0.021000},
{1.000000, {-6.000000, 0.000000, 2.000000, 0.000000}, 0.000750, 0.000040, 0.029000},
{1.000000, {-4.000000, -1.000000, 0.000000, 0.000000}, 180.000750, 0.000060, 0.027000},
{1.000000, {-4.000000, -1.000000, 1.000000, 0.000000}, 180.000740, 0.000080, 0.042000},
{1.000000, {-4.000000, 0.000000, -2.000000, 0.000000}, 0.000760, 0.000030, 0.016000},
{1.000000, {-4.000000, 0.000000, -1.000000, -2.000000}, 0.000950, 0.000020, 0.013000},
{1.000000, {-4.000000, 0.000000, -1.000000, 0.000000}, 0.000750, 0.000250, 0.020000},
{1.000000, {-4.000000, 0.000000, -1.000000, 2.000000}, 180.000460, 0.000010, 0.044000},
{1.000000, {-4.000000, 0.000000, 0.000000, -2.000000}, 0.000940, 0.000090, 0.016000},
{1.000000, {-4.000000, 0.000000, 0.000000, 0.000000}, 0.000730, 0.001880, 0.028000},
{1.000000, {-4.000000, 0.000000, 0.000000, 2.000000}, 0.000720, 0.000090, 0.108000},
{1.000000, {-4.000000, 0.000000, 1.000000, -2.000000}, 0.000830, 0.000170, 0.020000},
{1.000000, {-4.000000, 0.000000, 1.000000, 0.000000}, 0.000710, 0.003220, 0.044000},
{1.000000, {-4.000000, 0.000000, 2.000000, -2.000000}, 0.000550, 0.000090, 0.027000},
{1.000000, {-4.000000, 0.000000, 2.000000, 0.000000}, 0.000700, 0.000290, 0.104000},
{1.000000, {-4.000000, 1.000000, -1.000000, 0.000000}, 0.000750, 0.000030, 0.021000},
{1.000000, {-4.000000, 1.000000, 0.000000, -2.000000}, 0.000940, 0.000010, 0.016000},
{1.000000, {-4.000000, 1.000000, 0.000000, 0.000000}, 0.000750, 0.000210, 0.028000},
{1.000000, {-4.000000, 1.000000, 1.000000, -2.000000}, 0.000940, 0.000020, 0.021000},
{1.000000, {-4.000000, 1.000000, 1.000000, 0.000000}, 0.000720, 0.000290, 0.046000},
{1.000000, {-4.000000, 1.000000, 2.000000, -2.000000}, 0.000930, 0.000010, 0.028000},
{1.000000, {-4.000000, 1.000000, 2.000000, 0.000000}, 0.000720, 0.000020, 0.116000},
{1.000000, {-4.000000, 2.000000, 0.000000, 0.000000}, 0.000720, 0.000010, 0.029000},
{1.000000, {-4.000000, 2.000000, 1.000000, 0.000000}, 0.000720, 0.000020, 0.048000},
{1.000000, {-3.000000, -1.000000, 0.000000, 0.000000}, 0.000720, 0.000020, 0.040000},
{1.000000, {-3.000000, 0.000000, -1.000000, 0.000000}, 180.000720, 0.000020, 0.027000},
{1.000000, {-3.000000, 0.000000, 0.000000, 0.000000}, 180.000740, 0.000170, 0.042000},
{1.000000, {-3.000000, 0.000000, 0.000000, 2.000000}, 180.000720, 0.000010, 0.322000},
{1.000000, {-3.000000, 0.000000, 1.000000, 0.000000}, 180.000730, 0.000140, 0.095000},
{1.000000, {-3.000000, 0.000000, 2.000000, 0.000000}, 180.000720, 0.000020, 0.360000},
{1.000000, {-3.000000, 1.000000, 0.000000, 0.000000}, 180.000720, 0.000010, 0.044000},
{1.000000, {-2.000000, -2.000000, 0.000000, 0.000000}, 180.000370, 0.000130, 0.075000},
{1.000000, {-2.000000, -2.000000, 1.000000, 0.000000}, 180.000720, 0.000050, 8.853000},
{1.000000, {-2.000000, -1.000000, -2.000000, 0.000000}, 180.000750, 0.000030, 0.026000},
{1.000000, {-2.000000, -1.000000, -1.000000, -2.000000}, 180.000950, 0.000010, 0.019000},
{1.000000, {-2.000000, -1.000000, -1.000000, 0.000000}, 180.000730, 0.000410, 0.039000},
{1.000000, {-2.000000, -1.000000, 0.000000, -2.000000}, 180.000940, 0.000060, 0.026000},
{1.000000, {-2.000000, -1.000000, 0.000000, 0.000000}, 180.000710, 0.005890, 0.081000},
{1.000000, {-2.000000, -1.000000, 0.000000, 2.000000}, 180.000790, 0.000070, 0.069000},
{1.000000, {-2.000000, -1.000000, 1.000000, -2.000000}, 180.000660, 0.000050, 0.039000},
{1.000000, {-2.000000, -1.000000, 1.000000, 0.000000}, 180.000740, 0.000340, 1.127000},
{1.000000, {-2.000000, -1.000000, 2.000000, 0.000000}, 0.000720, 0.000030, 0.071000},
{1.000000, {-2.000000, 0.000000, -3.000000, -2.000000}, 0.000940, 0.000010, 0.013000},
{1.000000, {-2.000000, 0.000000, -3.000000, 0.000000}, 0.000770, 0.000070, 0.020000},
{1.000000, {-2.000000, 0.000000, -2.000000, -2.000000}, 0.001110, 0.000140, 0.015000},
{1.000000, {-2.000000, 0.000000, -2.000000, 0.000000}, 0.000770, 0.001100, 0.026000},
{1.000000, {-2.000000, 0.000000, -2.000000, 2.000000}, 180.000470, 0.000020, 0.091000},
{1.000000, {-2.000000, 0.000000, -1.000000, -2.000000}, 0.001040, 0.001040, 0.019000},
{1.000000, {-2.000000, 0.000000, -1.000000, 0.000000}, 0.000750, 0.016470, 0.041000},
{1.000000, {-2.000000, 0.000000, -1.000000, 2.000000}, 180.000590, 0.000480, 0.450000},
{1.000000, {-2.000000, 0.000000, 0.000000, -4.000000}, 180.000900, 0.000010, 0.015000},
{1.000000, {-2.000000, 0.000000, 0.000000, -2.000000}, 0.000930, 0.005620, 0.026000},
{1.000000, {-2.000000, 0.000000, 0.000000, 0.000000}, 0.000720, 0.298540, 0.088000},
{1.000000, {-2.000000, 0.000000, 0.000000, 2.000000}, 0.000770, 0.002730, 0.065000},
{1.000000, {-2.000000, 0.000000, 1.000000, -4.000000}, 180.000880, 0.000020, 0.019000},
{1.000000, {-2.000000, 0.000000, 1.000000, -2.000000}, 0.000650, 0.005620, 0.040000},
{1.000000, {-2.000000, 0.000000, 1.000000, 0.000000}, 0.000710, 0.073320, 0.530000},
{1.000000, {-2.000000, 0.000000, 1.000000, 2.000000}, 0.000720, 0.000430, 0.035000},
{1.000000, {-2.000000, 0.000000, 2.000000, -2.000000}, 179.999510, 0.000020, 0.085000},
{1.000000, {-2.000000, 0.000000, 2.000000, 0.000000}, 0.000660, 0.006720, 0.066000},
{1.000000, {-2.000000, 0.000000, 2.000000, 2.000000}, 0.000720, 0.000030, 0.024000},
{1.000000, {-2.000000, 0.000000, 3.000000, 0.000000}, 0.000630, 0.000630, 0.035000},
{1.000000, {-2.000000, 0.000000, 4.000000, 0.000000}, 0.000610, 0.000050, 0.024000},
{1.000000, {-2.000000, 1.000000, -2.000000, -2.000000}, 0.000940, 0.000010, 0.016000},
{1.000000, {-2.000000, 1.000000, -2.000000, 0.000000}, 0.000750, 0.000060, 0.027000},
{1.000000, {-2.000000, 1.000000, -1.000000, -2.000000}, 0.001040, 0.000080, 0.020000},
{1.000000, {-2.000000, 1.000000, -1.000000, 0.000000}, 0.000750, 0.000860, 0.042000},
{1.000000, {-2.000000, 1.000000, -1.000000, 2.000000}, 180.000600, 0.000030, 0.311000},
{1.000000, {-2.000000, 1.000000, 0.000000, -2.000000}, 0.000940, 0.000380, 0.027000},
{1.000000, {-2.000000, 1.000000, 0.000000, 0.000000}, 0.000720, 0.014040, 0.096000},
{1.000000, {-2.000000, 1.000000, 0.000000, 2.000000}, 0.000760, 0.000110, 0.061000},
{1.000000, {-2.000000, 1.000000, 1.000000, -2.000000}, 0.000650, 0.000250, 0.042000},
{1.000000, {-2.000000, 1.000000, 1.000000, 0.000000}, 0.000710, 0.003280, 0.346000},
{1.000000, {-2.000000, 1.000000, 1.000000, 2.000000}, 0.000730, 0.000010, 0.034000},
{1.000000, {-2.000000, 1.000000, 2.000000, 0.000000}, 0.000680, 0.000280, 0.062000},
{1.000000, {-2.000000, 1.000000, 3.000000, 0.000000}, 0.000720, 0.000020, 0.034000},
{1.000000, {-2.000000, 2.000000, -1.000000, 0.000000}, 0.000740, 0.000030, 0.044000},
{1.000000, {-2.000000, 2.000000, 0.000000, -2.000000}, 0.000930, 0.000020, 0.028000},
{1.000000, {-2.000000, 2.000000, 0.000000, 0.000000}, 0.000730, 0.000510, 0.107000},
{1.000000, {-2.000000, 2.000000, 1.000000, -2.000000}, 0.000910, 0.000010, 0.044000},
{1.000000, {-2.000000, 2.000000, 1.000000, 0.000000}, 0.000720, 0.000120, 0.257000},
{1.000000, {-2.000000, 2.000000, 2.000000, 0.000000}, 0.000720, 0.000010, 0.058000},
{1.000000, {-2.000000, 3.000000, 0.000000, 0.000000}, 0.000720, 0.000020, 0.119000},
{1.000000, {-1.000000, -1.000000, -1.000000, 0.000000}, 0.000720, 0.000020, 0.075000},
{1.000000, {-1.000000, -1.000000, 0.000000, -2.000000}, 0.000940, 0.000020, 0.037000},
{1.000000, {-1.000000, -1.000000, 0.000000, 0.000000}, 0.000720, 0.000360, 25770.018000},
{1.000000, {-1.000000, 0.000000, -2.000000, 0.000000}, 180.000720, 0.000020, 0.039000},
{1.000000, {-1.000000, 0.000000, -1.000000, -2.000000}, 180.001120, 0.000030, 0.026000},
{1.000000, {-1.000000, 0.000000, -1.000000, 0.000000}, 180.000720, 0.000290, 0.082000},
{1.000000, {-1.000000, 0.000000, 0.000000, -2.000000}, 180.000990, 0.000130, 0.039000},
{1.000000, {-1.000000, 0.000000, 0.000000, 0.000000}, 180.000730, 0.002120, 1.000000},
{1.000000, {-1.000000, 0.000000, 0.000000, 2.000000}, 180.000690, 0.000050, 0.036000},
{1.000000, {-1.000000, 0.000000, 1.000000, 0.000000}, 180.000740, 0.000170, 0.070000},
{1.000000, {-1.000000, 0.000000, 2.000000, 0.000000}, 180.000710, 0.000040, 0.036000},
{1.000000, {0.000000, -2.000000, -1.000000, 0.000000}, 180.000720, 0.000030, 0.530000},
{1.000000, {0.000000, -2.000000, 1.000000, 0.000000}, 180.000710, 0.000050, 0.041000},
{1.000000, {0.000000, -1.000000, -3.000000, 0.000000}, 180.000720, 0.000010, 0.036000},
{1.000000, {0.000000, -1.000000, -2.000000, -2.000000}, 180.001190, 0.000040, 0.024000},
{1.000000, {0.000000, -1.000000, -2.000000, 0.000000}, 180.000800, 0.000140, 0.071000},
{1.000000, {0.000000, -1.000000, -1.000000, -2.000000}, 180.001140, 0.000180, 0.036000},
{1.000000, {0.000000, -1.000000, -1.000000, 0.000000}, 180.000760, 0.002270, 1.127000},
{1.000000, {0.000000, -1.000000, 0.000000, -2.000000}, 180.001920, 0.000020, 0.069000},
{1.000000, {0.000000, -1.000000, 0.000000, 0.000000}, 180.000580, 0.002520, 0.081000},
{1.000000, {0.000000, -1.000000, 1.000000, -2.000000}, 0.002020, 0.000040, 0.819000},
{1.000000, {0.000000, -1.000000, 1.000000, 0.000000}, 180.000680, 0.002760, 0.039000},
{1.000000, {0.000000, -1.000000, 2.000000, 0.000000}, 180.000650, 0.000310, 0.026000},
{1.000000, {0.000000, -1.000000, 3.000000, 0.000000}, 180.000690, 0.000030, 0.019000},
{1.000000, {0.000000, 0.000000, -4.000000, -2.000000}, 0.001210, 0.000030, 0.015000},
{1.000000, {0.000000, 0.000000, -4.000000, 0.000000}, 0.000640, 0.000050, 0.025000},
{1.000000, {0.000000, 0.000000, -3.000000, -2.000000}, 0.001190, 0.000330, 0.019000},
{1.000000, {0.000000, 0.000000, -3.000000, 0.000000}, 0.000690, 0.000910, 0.038000},
{1.000000, {0.000000, 0.000000, -2.000000, -4.000000}, 180.000890, 0.000010, 0.015000},
{1.000000, {0.000000, 0.000000, -2.000000, -2.000000}, 0.001160, 0.003770, 0.025000},
{1.000000, {0.000000, 0.000000, -2.000000, 0.000000}, 0.000670, 0.017450, 0.076000},
{1.000000, {0.000000, 0.000000, -2.000000, 2.000000}, 180.000380, 0.000330, 0.073000},
{1.000000, {0.000000, 0.000000, -1.000000, -4.000000}, 180.000980, 0.000080, 0.019000},
{1.000000, {0.000000, 0.000000, -1.000000, -2.000000}, 0.001090, 0.039770, 0.037000},
{1.000000, {0.000000, 0.000000, -1.000000, 0.000000}, 0.000750, 0.455860, 8.847000},
{1.000000, {0.000000, 0.000000, -1.000000, 2.000000}, 0.000620, 0.004370, 0.037000},
{1.000000, {0.000000, 0.000000, 0.000000, -4.000000}, 180.000860, 0.000340, 0.025000},
{1.000000, {0.000000, 0.000000, 0.000000, -2.000000}, 0.000860, 0.326220, 0.074000},
{1.000000, {0.000000, 0.000000, 0.000000, -1.000000}, 270.000000, 0.000010, 18.613000},
{1.000000, {0.000000, 0.000000, 0.000000, 0.000000}, 180.000710, 8.045080, 0.075000},
{1.000000, {0.000000, 0.000000, 0.000000, 1.000000}, 270.000000, 0.000010, 0.037000},
{1.000000, {0.000000, 0.000000, 0.000000, 2.000000}, 0.000710, 0.008340, 0.025000},
{1.000000, {0.000000, 0.000000, 0.000000, 4.000000}, 180.000320, 0.000020, 0.015000},
{1.000000, {0.000000, 0.000000, 1.000000, -4.000000}, 180.000670, 0.000090, 0.037000},
{1.000000, {0.000000, 0.000000, 1.000000, -2.000000}, 0.004640, 0.002390, 4.536000},
{1.000000, {0.000000, 0.000000, 1.000000, 0.000000}, 180.000690, 0.415710, 0.038000},
{1.000000, {0.000000, 0.000000, 1.000000, 2.000000}, 0.000700, 0.001330, 0.019000},
{1.000000, {0.000000, 0.000000, 2.000000, -2.000000}, 0.001470, 0.000790, 0.077000},
{1.000000, {0.000000, 0.000000, 2.000000, 0.000000}, 180.000660, 0.024030, 0.025000},
{1.000000, {0.000000, 0.000000, 2.000000, 2.000000}, 0.000710, 0.000150, 0.015000},
{1.000000, {0.000000, 0.000000, 3.000000, -2.000000}, 0.001370, 0.000070, 0.038000},
{1.000000, {0.000000, 0.000000, 3.000000, 0.000000}, 180.000620, 0.001460, 0.019000},
{1.000000, {0.000000, 0.000000, 3.000000, 2.000000}, 0.000750, 0.000020, 0.013000},
{1.000000, {0.000000, 0.000000, 4.000000, 0.000000}, 180.000580, 0.000090, 0.015000},
{1.000000, {0.000000, 1.000000, -3.000000, 0.000000}, 0.000720, 0.000010, 0.039000},
{1.000000, {0.000000, 1.000000, -2.000000, -2.000000}, 0.001190, 0.000040, 0.026000},
{1.000000, {0.000000, 1.000000, -2.000000, 0.000000}, 0.000770, 0.000140, 0.082000},
{1.000000, {0.000000, 1.000000, -1.000000, -2.000000}, 0.001140, 0.000230, 0.039000},
{1.000000, {0.000000, 1.000000, -1.000000, 0.000000}, 0.000740, 0.002570, 0.898000},
{1.000000, {0.000000, 1.000000, -1.000000, 2.000000}, 0.000870, 0.000010, 0.036000},
{1.000000, {0.000000, 1.000000, 0.000000, -2.000000}, 0.000710, 0.000030, 0.080000},
{1.000000, {0.000000, 1.000000, 0.000000, 0.000000}, 0.000950, 0.002060, 0.070000},
{1.000000, {0.000000, 1.000000, 0.000000, 2.000000}, 180.000720, 0.000020, 0.024000},
{1.000000, {0.000000, 1.000000, 1.000000, -2.000000}, 180.002170, 0.000030, 1.283000},
{1.000000, {0.000000, 1.000000, 1.000000, 0.000000}, 0.000700, 0.002120, 0.036000},
{1.000000, {0.000000, 1.000000, 2.000000, 0.000000}, 0.000650, 0.000250, 0.024000},
{1.000000, {0.000000, 1.000000, 3.000000, 0.000000}, 0.000690, 0.000020, 0.018000},
{1.000000, {0.000000, 2.000000, -1.000000, 0.000000}, 0.000720, 0.000040, 0.473000},
{1.000000, {0.000000, 2.000000, 0.000000, 0.000000}, 0.000880, 0.000020, 0.065000},
{1.000000, {0.000000, 2.000000, 1.000000, 0.000000}, 0.000720, 0.000020, 0.035000},
{1.000000, {1.000000, 0.000000, -2.000000, 0.000000}, 0.000720, 0.000040, 1.292000},
{1.000000, {1.000000, 0.000000, -1.000000, 0.000000}, 180.001370, 0.000030, 0.080000},
{1.000000, {1.000000, 0.000000, 0.000000, -2.000000}, 180.001020, 0.000030, 0.903000},
{1.000000, {1.000000, 0.000000, 0.000000, 0.000000}, 0.000710, 0.002180, 0.039000},
{1.000000, {1.000000, 0.000000, 1.000000, -2.000000}, 180.001310, 0.000010, 0.082000},
{1.000000, {1.000000, 0.000000, 1.000000, 0.000000}, 0.000670, 0.000260, 0.026000},
{1.000000, {1.000000, 0.000000, 2.000000, 0.000000}, 0.000680, 0.000020, 0.019000},
{1.000000, {1.000000, 1.000000, -1.000000, 0.000000}, 0.000220, 0.000080, 0.074000},
{1.000000, {1.000000, 1.000000, 0.000000, -2.000000}, 0.000280, 0.000010, 9.303000},
{1.000000, {1.000000, 1.000000, 0.000000, 0.000000}, 180.000730, 0.000320, 0.037000},
{1.000000, {1.000000, 1.000000, 1.000000, 0.000000}, 180.000700, 0.000040, 0.025000},
{1.000000, {2.000000, -2.000000, -1.000000, 0.000000}, 180.000710, 0.000130, 0.044000},
{1.000000, {2.000000, -2.000000, 0.000000, -2.000000}, 0.001020, 0.000020, 0.108000},
{1.000000, {2.000000, -2.000000, 0.000000, 0.000000}, 180.000700, 0.000150, 0.028000},
{1.000000, {2.000000, -2.000000, 1.000000, 0.000000}, 180.000690, 0.000020, 0.020000},
{1.000000, {2.000000, -1.000000, -2.000000, -2.000000}, 180.001460, 0.000020, 0.062000},
{1.000000, {2.000000, -1.000000, -2.000000, 0.000000}, 0.000910, 0.000020, 0.094000},
{1.000000, {2.000000, -1.000000, -1.000000, -2.000000}, 180.002530, 0.000030, 0.334000},
{1.000000, {2.000000, -1.000000, -1.000000, 0.000000}, 180.000730, 0.003710, 0.042000},
{1.000000, {2.000000, -1.000000, -1.000000, 2.000000}, 0.000720, 0.000020, 0.020000},
{1.000000, {2.000000, -1.000000, 0.000000, -2.000000}, 0.001010, 0.000490, 0.097000},
{1.000000, {2.000000, -1.000000, 0.000000, 0.000000}, 180.000700, 0.003150, 0.027000},
{1.000000, {2.000000, -1.000000, 0.000000, 2.000000}, 0.000730, 0.000010, 0.016000},
{1.000000, {2.000000, -1.000000, 1.000000, -2.000000}, 0.001120, 0.000080, 0.043000},
{1.000000, {2.000000, -1.000000, 1.000000, 0.000000}, 180.000660, 0.000430, 0.020000},
{1.000000, {2.000000, -1.000000, 2.000000, 0.000000}, 180.000670, 0.000040, 0.016000},
{1.000000, {2.000000, 0.000000, -4.000000, 0.000000}, 180.000720, 0.000010, 0.067000},
{1.000000, {2.000000, 0.000000, -3.000000, -2.000000}, 180.001380, 0.000070, 0.035000},
{1.000000, {2.000000, 0.000000, -3.000000, 0.000000}, 180.000740, 0.000130, 0.602000},
{1.000000, {2.000000, 0.000000, -2.000000, -2.000000}, 180.001500, 0.000380, 0.066000},
{1.000000, {2.000000, 0.000000, -2.000000, 0.000000}, 0.001640, 0.000330, 0.086000},
{1.000000, {2.000000, 0.000000, -2.000000, 2.000000}, 0.000620, 0.000100, 0.026000},
{1.000000, {2.000000, 0.000000, -1.000000, -4.000000}, 180.000830, 0.000010, 0.035000},
{1.000000, {2.000000, 0.000000, -1.000000, -2.000000}, 180.002400, 0.000660, 0.501000},
{1.000000, {2.000000, 0.000000, -1.000000, 0.000000}, 180.000730, 0.083500, 0.040000},
{1.000000, {2.000000, 0.000000, -1.000000, 2.000000}, 0.000690, 0.000330, 0.019000},
{1.000000, {2.000000, 0.000000, 0.000000, -4.000000}, 180.000720, 0.000040, 0.064000},
{1.000000, {2.000000, 0.000000, 0.000000, -2.000000}, 0.001020, 0.010050, 0.089000},
{1.000000, {2.000000, 0.000000, 0.000000, 0.000000}, 180.000700, 0.046380, 0.026000},
{1.000000, {2.000000, 0.000000, 0.000000, 2.000000}, 0.000730, 0.000180, 0.015000},
{1.000000, {2.000000, 0.000000, 1.000000, -2.000000}, 0.001120, 0.001390, 0.041000},
{1.000000, {2.000000, 0.000000, 1.000000, 0.000000}, 180.000670, 0.005630, 0.019000},
{1.000000, {2.000000, 0.000000, 1.000000, 2.000000}, 0.000720, 0.000040, 0.013000},
{1.000000, {2.000000, 0.000000, 2.000000, -2.000000}, 0.001150, 0.000140, 0.026000},
{1.000000, {2.000000, 0.000000, 2.000000, 0.000000}, 180.000620, 0.000540, 0.015000},
{1.000000, {2.000000, 0.000000, 3.000000, -2.000000}, 0.000930, 0.000010, 0.020000},
{1.000000, {2.000000, 0.000000, 3.000000, 0.000000}, 180.000660, 0.000050, 0.013000},
{1.000000, {2.000000, 1.000000, -2.000000, 0.000000}, 180.000720, 0.000020, 0.079000},
{1.000000, {2.000000, 1.000000, -1.000000, -2.000000}, 0.001210, 0.000010, 1.006000},
{1.000000, {2.000000, 1.000000, -1.000000, 0.000000}, 0.000740, 0.000550, 0.039000},
{1.000000, {2.000000, 1.000000, 0.000000, -2.000000}, 180.001030, 0.000190, 0.082000},
{1.000000, {2.000000, 1.000000, 0.000000, 0.000000}, 0.000710, 0.000490, 0.026000},
{1.000000, {2.000000, 1.000000, 1.000000, -2.000000}, 180.001140, 0.000030, 0.039000},
{1.000000, {2.000000, 1.000000, 1.000000, 0.000000}, 0.000690, 0.000090, 0.019000},
{1.000000, {2.000000, 1.000000, 2.000000, 0.000000}, 0.000670, 0.000010, 0.015000},
{1.000000, {2.000000, 2.000000, -1.000000, 0.000000}, 0.000710, 0.000050, 0.037000},
{1.000000, {3.000000, 0.000000, -2.000000, 0.000000}, 0.000720, 0.000020, 0.042000},
{1.000000, {3.000000, 0.000000, -1.000000, 0.000000}, 0.000700, 0.000080, 0.027000},
{1.000000, {3.000000, 0.000000, 0.000000, 0.000000}, 0.000720, 0.000010, 0.020000},
{1.000000, {4.000000, -2.000000, -1.000000, 0.000000}, 180.000720, 0.000010, 0.021000},
{1.000000, {4.000000, -1.000000, -2.000000, 0.000000}, 180.000700, 0.000080, 0.028000},
{1.000000, {4.000000, -1.000000, -1.000000, -2.000000}, 0.000740, 0.000020, 0.046000},
{1.000000, {4.000000, -1.000000, -1.000000, 0.000000}, 180.000690, 0.000130, 0.021000},
{1.000000, {4.000000, -1.000000, 0.000000, -2.000000}, 0.000960, 0.000020, 0.029000},
{1.000000, {4.000000, -1.000000, 0.000000, 0.000000}, 180.000670, 0.000060, 0.016000},
{1.000000, {4.000000, -1.000000, 1.000000, 0.000000}, 180.000660, 0.000010, 0.013000},
{1.000000, {4.000000, 0.000000, -3.000000, 0.000000}, 180.000340, 0.000010, 0.043000},
{1.000000, {4.000000, 0.000000, -2.000000, 0.000000}, 180.000740, 0.000970, 0.028000},
{1.000000, {4.000000, 0.000000, -1.000000, -2.000000}, 0.000740, 0.000190, 0.044000},
{1.000000, {4.000000, 0.000000, -1.000000, 0.000000}, 180.000710, 0.001130, 0.020000},
{1.000000, {4.000000, 0.000000, -1.000000, 2.000000}, 0.000560, 0.000010, 0.013000},
{1.000000, {4.000000, 0.000000, 0.000000, -2.000000}, 0.000960, 0.000190, 0.028000},
{1.000000, {4.000000, 0.000000, 0.000000, 0.000000}, 180.000670, 0.000430, 0.016000},
{1.000000, {4.000000, 0.000000, 1.000000, -2.000000}, 0.001030, 0.000040, 0.020000},
{1.000000, {4.000000, 0.000000, 1.000000, 0.000000}, 180.000660, 0.000070, 0.013000},
{1.000000, {4.000000, 1.000000, -2.000000, 0.000000}, 0.000720, 0.000010, 0.027000},
{1.000000, {4.000000, 1.000000, -1.000000, 0.000000}, 0.000690, 0.000020, 0.020000},
{1.000000, {6.000000, 0.000000, -3.000000, 0.000000}, 180.000690, 0.000010, 0.021000},
{1.000000, {6.000000, 0.000000, -2.000000, 0.000000}, 180.000670, 0.000020, 0.016000},
{1.000000, {6.000000, 0.000000, -1.000000, 0.000000}, 180.000660, 0.000010, 0.013000},
{2.000000, {-4.000000, 0.000000, 0.000000, -1.000000}, 180.000000, 0.000020, 0.028000},
{2.000000, {-4.000000, 0.000000, 1.000000, -1.000000}, 180.000000, 0.000030, 0.044000},
{2.000000, {-2.000000, -1.000000, 0.000000, -1.000000}, 0.000000, 0.000060, 0.081000},
{2.000000, {-2.000000, 0.000000, -2.000000, -1.000000}, 180.000000, 0.000010, 0.026000},
{2.000000, {-2.000000, 0.000000, -1.000000, -1.000000}, 180.000000, 0.000160, 0.041000},
{2.000000, {-2.000000, 0.000000, 0.000000, -3.000000}, 180.000000, 0.000030, 0.026000},
{2.000000, {-2.000000, 0.000000, 0.000000, -1.000000}, 180.000000, 0.002930, 0.088000},
{2.000000, {-2.000000, 0.000000, 0.000000, 1.000000}, 180.000000, 0.000140, 0.065000},
{2.000000, {-2.000000, 0.000000, 1.000000, -3.000000}, 180.000000, 0.000030, 0.040000},
{2.000000, {-2.000000, 0.000000, 1.000000, -1.000000}, 180.000000, 0.000720, 0.545000},
{2.000000, {-2.000000, 0.000000, 1.000000, 1.000000}, 180.000000, 0.000010, 0.035000},
{2.000000, {-2.000000, 0.000000, 2.000000, -1.000000}, 180.000000, 0.000070, 0.066000},
{2.000000, {-2.000000, 1.000000, 0.000000, -1.000000}, 180.000000, 0.000140, 0.096000},
{2.000000, {-2.000000, 1.000000, 1.000000, -1.000000}, 180.000000, 0.000030, 0.353000},
{2.000000, {-1.000000, 0.000000, 0.000000, -1.000000}, 0.000000, 0.000020, 1.057000},
{2.000000, {0.000000, -1.000000, -1.000000, -1.000000}, 0.000000, 0.000020, 1.063000},
{2.000000, {0.000000, -1.000000, 0.000000, -1.000000}, 0.000000, 0.000030, 0.081000},
{2.000000, {0.000000, -1.000000, 1.000000, -1.000000}, 0.000000, 0.000030, 0.039000},
{2.000000, {0.000000, 0.000000, -3.000000, -1.000000}, 180.000000, 0.000010, 0.038000},
{2.000000, {0.000000, 0.000000, -2.000000, -3.000000}, 180.000000, 0.000020, 0.025000},
{2.000000, {0.000000, 0.000000, -2.000000, -1.000000}, 180.000000, 0.000200, 0.076000},
{2.000000, {0.000000, 0.000000, -2.000000, 1.000000}, 180.000000, 0.000050, 0.073000},
{2.000000, {0.000000, 0.000000, -1.000000, -3.000000}, 180.000000, 0.000190, 0.037000},
{2.000000, {0.000000, 0.000000, -1.000000, -1.000000}, 180.000000, 0.004410, 16.863000},
{2.000000, {0.000000, 0.000000, -1.000000, 1.000000}, 180.000000, 0.000060, 0.037000},
{2.000000, {0.000000, 0.000000, 0.000000, -3.000000}, 180.000000, 0.001560, 0.074000},
{2.000000, {0.000000, 0.000000, 0.000000, -1.000000}, 0.000000, 0.080420, 0.075000},
{2.000000, {0.000000, 0.000000, 0.000000, 1.000000}, 180.000000, 0.000030, 0.025000},
{2.000000, {0.000000, 0.000000, 1.000000, -1.000000}, 0.000000, 0.004250, 0.038000},
{2.000000, {0.000000, 0.000000, 2.000000, -1.000000}, 0.000000, 0.000260, 0.025000},
{2.000000, {0.000000, 0.000000, 3.000000, -1.000000}, 0.000000, 0.000020, 0.019000},
{2.000000, {0.000000, 1.000000, -1.000000, -1.000000}, 180.000000, 0.000020, 0.944000},
{2.000000, {0.000000, 1.000000, 1.000000, -1.000000}, 180.000000, 0.000020, 0.036000},
{2.000000, {1.000000, 0.000000, 0.000000, -1.000000}, 180.000000, 0.000020, 0.039000},
{2.000000, {1.000000, 1.000000, -1.000000, -1.000000}, 180.000000, 0.000020, 0.074000},
{2.000000, {2.000000, -1.000000, -1.000000, -1.000000}, 0.000000, 0.000040, 0.042000},
{2.000000, {2.000000, -1.000000, 0.000000, -1.000000}, 0.000000, 0.000030, 0.027000},
{2.000000, {2.000000, 0.000000, -1.000000, -1.000000}, 0.000000, 0.000850, 0.040000},
{2.000000, {2.000000, 0.000000, 0.000000, -3.000000}, 180.000000, 0.000050, 0.089000},
{2.000000, {2.000000, 0.000000, 0.000000, -1.000000}, 0.000000, 0.000490, 0.026000},
{2.000000, {2.000000, 0.000000, 1.000000, -1.000000}, 0.000000, 0.000060, 0.019000},
{2.000000, {4.000000, 0.000000, -1.000000, -1.000000}, 0.000000, 0.000010, 0.020000},
{2.000000, {4.000000, 0.000000, -1.000000, -1.000000}, 0.000000, 0.000010, 0.020000},
};
