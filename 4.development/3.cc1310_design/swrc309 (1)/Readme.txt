XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
X   	Artwork and documentation done by: 			X
X								X
X	TEXAS INSTRUMENTS NORWAY LPRF              		X
X  								X
X	Address: Gaustadalléen 21    0349 OSLO	              	X
X 	web: www.ti.com/lprF		              		X
X                                                           	X
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

PCB NAME : CC13xxEM-7XD-7793
REVISION: 1.3.3
DATE: 2015-06-11

FILE:  PACKED WITH WinZIP 
s
PCB DESCRIPTION:2 LAYER PCB 0.8 MM
      Copper        1   35 um
      Dielectric  1-2   0.73 mm FR4
      Copper        2   35 um

 
Via L1-L2

Soldermask color: GREEN

  DE104iML or equivalent substrate (Resin contents around 45%, which gives Er=4.42@2.4GHz, TanD=0.016)
  Dimensions in mm
  DOUBLE SIDE SOLDER MASK,
  DOUBLE SIDE SILKSCREEN,
  0.15 MM MIN TRACE WIDTH AND 0.15 MM MIN ISOLATION.

                 
FILE NAME            		DESCRIPTION                               	FILE TYPE
-------------------------------------------------------------------------------------------
***PCB MANUFACTURING FILES: (Folder Gerber)
Top.art                 	LAYER 1 TOP SIDE/POSITIV              		EXT. GERBER
Bottom.art                  	LAYER 2 SOLDER SIDE/POSITIV                 	EXT. GERBER
outline.art		        Outline of PCB				        EXT. GERBER
soldmask_top.art            	SOLDER MASK COMPONENT SIDE/NEGATIVE             EXT. GERBER
soldmask_bottom.art             SOLDER MASK SOLDER SIDE/NEGATIVE            	EXT. GERBER
silk_top.art	            	SILKSCREEN COMPONENT SIDE/POSITIVE              EXT. GERBER
silk_bottom.art		        SILKSCREEN SOLDER SIDE/POSITIVE             	EXT. GERBER
drill.art		        DRILL/MECHANICAL DRAWING                    	EXT. GERBER
art_param.txt                   Gerber report 				        ASCII
photoplot.log                   Gerber report					ASCII


***PCB DRILL FILES: (Folder Drill)
NCdrill-1-2.drl                 NC DRILL Plated		                       	EXCELLON
NCdrill-1-2-np.drl		NC DRILL non-Plated		 	        EXCELLON
ncdrill.log		        DRILL/NC DRILL REPORT                           ASCII
nc_pararm.txt		        PCB PHOTOPLOTTER DEFINITION FILE	        ASCII
nc_tools_auto.txt               Drill diameters				        ASCII


*** ASSEMBLY FILES: (Folder Assembly)
assembly_top.art	        ASSEMBLY DRAWING COMPONENT SIDE/NEGATIVE        EXT. GERBER
assembly_bot_mirror.art        	ASSEMBLY DRAWING SOLDER SIDE/NEGATIVE, MIRROR   EXT. GERBER
paste_top.art	             	SOLDER PAST COMPONENT SIDE/POSITIVE             EXT. GERBER
paste_bottom.art	        SOLDER PAST SOLDER SIDE/POSITIVE                EXT. GERBER
pick_and_place.txt            	PICK AND PLACE FILE 			        ASCII
CC13xxEM_7XD_7793_partlist_1_3_3.xls 	BOM				        Excel


*** Document files: (Folder docs)
CC13xxEM_7XD_7793_schematic_1_3_3.pdf	Circuit Diagram				PDF
CC13xxEM_7XD_7793_layout_1_3.pdf        Layout Diagram				PDF
CC13xxEM_7XD_7793_mech_draw_1_3.pdf	Mechanical drawing     			PDF
CC13xxEM_7XD_7793_assembly_1_3_3.pdf	Assembly drawing                	PDF


README.TXT           			THIS FILE                     	        ASCII


R 1.0.0
--------------------------------------------------------------------------------------------
-Initial release revision  

R1.0.1
--------------------------------------------------------------------------------------------
L3 -> Changed from LQG to LQW
L4 -> Changed from LQG to LQW

R1.1.0
--------------------------------------------------------------------------------------------
-New CC13xx symbol with different DIO to pin mapping
-New Crystal (9 pF, from 7 pF. But 9 pF has been assembled on previous EMs).
-New reference numbers on components.

R1.2.0
--------------------------------------------------------------------------------------------
- Updating RF filter for better harmonic supression.
- Remove test point on RXTX pin.

R1.3.0
---------------------------------------------------------------------------------------------
- For PG2
- C15 33pF -> 100pF
- L12, L21 8.2nH -> 7.5nH
- C13 4.7nH -> 6.2nH
- C14 2.2nH -> 3.3nH

R1.3.1
---------------------------------------------------------------------------------------------
L331 10uH -> 6.8uH

R1.3.2
---------------------------------------------------------------------------------------------
C341 10uF -> 22uF


R1.3.3
---------------------------------------------------------------------------------------------
C331 10uF -> 22uF



END.
