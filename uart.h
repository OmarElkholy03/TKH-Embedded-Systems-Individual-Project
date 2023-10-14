// Function prototypes defined in header file for UART library
// .h files should be included in main app in order to use the library

void uart_SetBaudRate(int baud);
void uart_init (int baud); // function to initialize the process
void uart_transmit (unsigned char data); // function to transmit data
unsigned char uart_recieve (void); // function to recieve data
int uart_recieve_ready (void); // function to check interrupt flags for UART