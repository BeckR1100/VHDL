////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.20131013
//  \   \         Application: netgen
//  /   /         Filename: automat1_synthesis.v
// /___/   /\     Timestamp: Thu May 19 17:55:01 2016
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -insert_glbl true -w -dir netgen/synthesis -ofmt verilog -sim automat1.ngc automat1_synthesis.v 
// Device	: xc3s100e-4-vq100
// Input file	: automat1.ngc
// Output file	: C:\Users\Robert\Desktop\Fakultet\VHDLovi\automat1\netgen\synthesis\automat1_synthesis.v
// # of Modules	: 1
// Design Name	: automat1
// Xilinx        : C:\Xilinx\14.7\ISE_DS\ISE\
//             
// Purpose:    
//     This verilog netlist is a verification model and uses simulation 
//     primitives which may not represent the true implementation of the 
//     device, however the netlist is functionally correct and should not 
//     be modified. This file cannot be synthesized and should only be used 
//     with supported simulation tools.
//             
// Reference:  
//     Command Line Tools User Guide, Chapter 23 and Synthesis and Simulation Design Guide, Chapter 6
//             
////////////////////////////////////////////////////////////////////////////////

`timescale 1 ns/1 ps

module automat1 (
  y, clock, input0
);
  output y;
  input clock;
  input input0;
  wire Mshreg_state_present_2_0;
  wire N0;
  wire N1;
  wire clock_BUFGP_4;
  wire input0_IBUF_6;
  wire [2 : 2] state_present;
  IBUF   input0_IBUF (
    .I(input0),
    .O(input0_IBUF_6)
  );
  OBUF   y_OBUF (
    .I(state_present[2]),
    .O(y)
  );
  BUFGP   clock_BUFGP (
    .I(clock),
    .O(clock_BUFGP_4)
  );
  GND   XST_GND (
    .G(N0)
  );
  VCC   XST_VCC (
    .P(N1)
  );
  SRL16E_1 #(
    .INIT ( 16'h0000 ))
  Mshreg_state_present_2 (
    .A0(N1),
    .A1(N0),
    .A2(N0),
    .A3(N0),
    .CE(input0_IBUF_6),
    .CLK(clock_BUFGP_4),
    .D(state_present[2]),
    .Q(Mshreg_state_present_2_0)
  );
  FDE_1   state_present_2 (
    .C(clock_BUFGP_4),
    .CE(input0_IBUF_6),
    .D(Mshreg_state_present_2_0),
    .Q(state_present[2])
  );
endmodule


`ifndef GLBL
`define GLBL

`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;

    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (weak1, weak0) GSR = GSR_int;
    assign (weak1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule

`endif

