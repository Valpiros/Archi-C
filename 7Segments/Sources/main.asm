;*******************************************************************
;* This stationery serves as the framework for a user application. *
;* For a more comprehensive program that demonstrates the more     *
;* advanced functionality of this processor, please see the        *
;* demonstration applications, located in the examples             *
;* subdirectory of the "Freescale CodeWarrior for HC08" program    *
;* directory.                                                      *
;*******************************************************************

; Include derivative-specific definitions
            INCLUDE 'derivative.inc'
            XREF MCU_init

; export symbols
            XDEF _Startup, main
            ; we export both '_Startup' and 'main' as symbols. Either can
            ; be referenced in the linker .prm file or from C/C++ later on
            
            
            
            XREF __SEG_END_SSTACK   ; symbol defined by the linker for the end of the stack


; variable/data section
MY_ZEROPAGE: SECTION  SHORT         ; Insert here your data definition

; code section
MyCode:     SECTION
main:
_Startup:
            LDHX   #__SEG_END_SSTACK ; initialize the stack pointer
            TXS
			; Call generated device initialization function
			JSR    MCU_init

mainLoop:
            MOV		#$FF,PTCDD
            MOV		#$FF,PTCD
            ;LDHX	#$EF00
            ;STHX	$FFFA
            ;MOV		#$12,IRQSC
            CLI
Inf			CLR		$60
			BEQ		Inf
            NOP
            BRA		Inf		

            ; feed_watchdog -- By default COP is disabled with device init. When enabling, also reset the watchdog. */
            BRA    mainLoop


