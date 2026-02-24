/* Stub for soem (EtherCAT) symbols required by libhardware.so.
   These are never called when using CAN bus. */

int EcatError = 0;
long long ec_DCtime = 0;

void ecx_send_processdata(void) {}
void ecx_receive_processdata(void) {}
void ecx_init(void) {}
void ecx_close(void) {}
void ecx_configdc(void) {}
void ecx_config_init(void) {}
void ecx_config_map_group(void) {}
void ecx_readstate(void) {}
void ecx_writestate(void) {}
void ecx_statecheck(void) {}
const char* ec_ALstatuscode2string(unsigned int ALstatuscode) { return ""; }
