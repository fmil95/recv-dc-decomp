ENTRY(_START_SYS)
SECTIONS
{
  . = 0x8C010000;
  P : { * (P) }
  C : { * (C) }
  D : { * (D) }
  PSG : { * (PSG) }
  CSG : { * (CSG) }
  DSG : { * (DSG) }
  B (NOLOAD) : { * (B) }
}
