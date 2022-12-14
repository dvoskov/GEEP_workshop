RPTSCHED
	FIP WELLS /

RPTRST
	BASIC=6 FLOWS /

GRUPTREE
'GROUP1'	FIELD /
'GROUP2'        FIELD /
/

WELSPECS
--'NA1A' is the simulation well name used to describe flow from 'NA1A;Tubing 1'
--'NA2' is the simulation well name used to describe flow from 'NA2;Tubing 1'
--'NA3D' is the simulation well name used to describe flow from 'NA3D;Tubing 1'
--'RJS19' is the simulation well name used to describe flow from 'RJS19;Tubing 1'

  NA1A 'GROUP1' 38 36 1* OIL /
  NA2 'GROUP1' 21 36 1* OIL /
  NA3D 'GROUP1' 44 43 1* OIL /
  RJS19 'GROUP1' 31 27 1* OIL /
  PROD005 'GROUP1' 33 18 1* OIL /
  PROD008 'GROUP1' 19 30 1* OIL /
  PROD009 'GROUP1' 15 40 1* OIL /
  PROD010 'GROUP1' 36 42 1* OIL /
  PROD012 'GROUP1' 46 23 1* OIL /
  PROD014 'GROUP1' 50 18 1* OIL /
  PROD021 'GROUP1' 27 41 1* OIL /
  PROD023A 'GROUP1' 65 23 1* OIL /
  PROD024A 'GROUP1' 61 35 1* OIL /
  PROD025A 'GROUP1' 57 23 1* OIL /
  INJ003 'GROUP2' 49 23 1* WATER /
  INJ005 'GROUP2' 31 19 1* WATER /
  INJ006 'GROUP2' 48 34 1* WATER /
  INJ007 'GROUP2' 59 17 1* WATER /
  INJ010 'GROUP2' 55 30 1* WATER /
  INJ015 'GROUP2' 36 28 1* WATER /
  INJ017 'GROUP2' 33 39 1* WATER /
  INJ019 'GROUP2' 29 41 1* WATER /
  INJ021 'GROUP2' 24 28 1* WATER /
  INJ022 'GROUP2' 48 11 1* WATER /
  INJ023 'GROUP2' 42 18 1* WATER /
  /

COMPDAT
  NA1A 38 36 1 3 OPEN 2* 0.152 /
  NA1A 38 36 6 13 OPEN 2* 0.152 /
  NA1A 38 36 15 19 OPEN 2* 0.152 /
 
  NA2 21 36 1 3 OPEN 2* 0.152 /
  NA2 21 36 6 12 OPEN 2* 0.152 /

  NA3D 44 43 1 3 OPEN 2* 0.152 /
  NA3D 44 43 6 11 OPEN 2* 0.152 /

  RJS19 31 27 1 3 OPEN 2* 0.152 /  
  RJS19 31 27 6 13 OPEN 2* 0.152 /
  RJS19 31 27 15 16 OPEN 2* 0.152 /

  PROD005 33 18 1   3 OPEN 2* 0.152 3* Z/
  PROD005 33 18 6  13 OPEN 2* 0.152 3* Z/
  PROD005 33 18 15 19 OPEN 2* 0.152 3* Z/

  PROD008 19 30 1   3 OPEN 2* 0.152 3* Z/
  PROD008 19 30 6  13 OPEN 2* 0.152 3* Z/
  PROD008 19 30 15 19 OPEN 2* 0.152 3* Z/

  PROD009 15 40 1   3 OPEN 2* 0.152 3* Z/
  PROD009 15 40 6  13 OPEN 2* 0.152 3* Z/
  PROD009 15 40 15 19 OPEN 2* 0.152 3* Z/

  PROD010 36 42 1   3 OPEN 2* 0.152 3* Z/
  PROD010 36 42 6  13 OPEN 2* 0.152 3* Z/
  PROD010 36 42 15 19 OPEN 2* 0.152 3* Z/

  PROD012 46 23 1   3 OPEN 2* 0.152 3* Z/
  PROD012 46 23 6  13 OPEN 2* 0.152 3* Z/
  PROD012 46 23 15 19 OPEN 2* 0.152 3* Z/
	
  PROD014 50 18 1   3 OPEN 2* 0.152 3* Z/
  PROD014 50 18 6  13 OPEN 2* 0.152 3* Z/
  PROD014 50 18 15 19 OPEN 2* 0.152 3* Z/

  PROD021 27 41 1   3 OPEN 2* 0.152 3* Z/
  PROD021 27 41 6  13 OPEN 2* 0.152 3* Z/
  PROD021 27 41 15 19 OPEN 2* 0.152 3* Z/

  PROD023A 65 23 1   3 OPEN 2* 0.152 3* Z/
  PROD023A 65 23 6  13 OPEN 2* 0.152 3* Z/
  PROD023A 65 23 15 19 OPEN 2* 0.152 3* Z/

  PROD024A 61 35 1   3 OPEN 2* 0.152 3* Z/
  PROD024A 61 35 6  13 OPEN 2* 0.152 3* Z/
  PROD024A 61 35 15 19 OPEN 2* 0.152 3* Z/

  PROD025A 57 23 1   3 OPEN 2* 0.152 3* Z/
  PROD025A 57 23 6  13 OPEN 2* 0.152 3* Z/
  PROD025A 57 23 15 19 OPEN 2* 0.152 3* Z/

  INJ003 49 23 1   3 OPEN 2* 0.152 3* Z/
  INJ003 49 23 6  13 OPEN 2* 0.152 3* Z/
  INJ003 49 23 15 19 OPEN 2* 0.152 3* Z/

  INJ005 31 19 1   3 OPEN 2* 0.152 3* Z/
  INJ005 31 19 6  13 OPEN 2* 0.152 3* Z/
  INJ005 31 19 15 19 OPEN 2* 0.152 3* Z/
  
  INJ006 48 34 1   3 OPEN 2* 0.152 3* Z/
  INJ006 48 34 6  13 OPEN 2* 0.152 3* Z/
  INJ006 48 34 15 19 OPEN 2* 0.152 3* Z/

  INJ007 59 17 1   3 OPEN 2* 0.152 3* Z/
  INJ007 59 17 6  13 OPEN 2* 0.152 3* Z/
  INJ007 59 17 15 19 OPEN 2* 0.152 3* Z/

  INJ010 55 30 1   3 OPEN 2* 0.152 3* Z/
  INJ010 55 30 6  13 OPEN 2* 0.152 3* Z/
  INJ010 55 30 15 19 OPEN 2* 0.152 3* Z/

  INJ015 36 28 1   3 OPEN 2* 0.152 3* Z/
  INJ015 36 28 6  13 OPEN 2* 0.152 3* Z/
  INJ015 36 28 15 19 OPEN 2* 0.152 3* Z/

  INJ017 33 39 1   3 OPEN 2* 0.152 3* Z/
  INJ017 33 39 6  13 OPEN 2* 0.152 3* Z/
  INJ017 33 39 15 19 OPEN 2* 0.152 3* Z/

  INJ019 29 41 1   3 OPEN 2* 0.152 3* Z/
  INJ019 29 41 6  13 OPEN 2* 0.152 3* Z/
  INJ019 29 41 15 19 OPEN 2* 0.152 3* Z/

  INJ021 24 28 1   3 OPEN 2* 0.152 3* Z/
  INJ021 24 28 6  13 OPEN 2* 0.152 3* Z/
  INJ021 24 28 15 19 OPEN 2* 0.152 3* Z/

  INJ022 48 11 1   3 OPEN 2* 0.152 3* Z/
  INJ022 48 11 6  13 OPEN 2* 0.152 3* Z/
  INJ022 48 11 15 19 OPEN 2* 0.152 3* Z/

  INJ023 42 18 1   3 OPEN 2* 0.152 3* Z/
  INJ023 42 18 6  13 OPEN 2* 0.152 3* Z/
  INJ023 42 18 15 19 OPEN 2* 0.152 3* Z/
  /

WCONPROD
  NA1A     OPEN  ORAT  800.00 4* 35.3/
  NA2      OPEN  ORAT  800.00 4* 35.3/
  NA3D     OPEN  ORAT  800.00 4* 35.3/
  RJS19    OPEN  ORAT  800.00 4* 35.3/
  PROD005  OPEN  ORAT  800.00 4* 35.3/
  PROD008  OPEN  ORAT  800.00 4* 35.3/
  PROD009  OPEN  ORAT  800.00 4* 35.3/
  PROD010  OPEN  ORAT  800.00 4* 35.3/
  PROD012  OPEN  ORAT  800.00 4* 35.3/
  PROD014  OPEN  ORAT  800.00 4* 35.3/
  PROD021  OPEN  ORAT  800.00 4* 35.3/
  PROD023A OPEN  ORAT  800.00 4* 35.3/
  PROD024A OPEN  ORAT  800.00 4* 35.3/
  PROD025A OPEN  ORAT  800.00 4* 35.3/
  /


WCONINJE
  INJ003 WATER OPEN RATE 1200.00 1* 343.2 1* 0 /
  INJ005 WATER OPEN RATE 1200.00 1* 343.2 1* 0 /
  INJ006 WATER OPEN RATE 1200.00 1* 343.2 1* 0 /
  INJ007 WATER OPEN RATE 1200.00 1* 343.2 1* 0 /
  INJ010 WATER OPEN RATE 1200.00 1* 343.2 1* 0 /
  INJ015 WATER OPEN RATE 1200.00 1* 343.2 1* 0 /
  INJ017 WATER OPEN RATE 1200.00 1* 343.2 1* 0 /
  INJ019 WATER OPEN RATE 1200.00 1* 343.2 1* 0 /
  INJ021 WATER OPEN RATE 1200.00 1* 343.2 1* 0 /
  INJ022 WATER OPEN RATE 1200.00 1* 343.2 1* 0 /
  INJ023 WATER OPEN RATE 1200.00 1* 343.2 1* 0 /
  /
  
 TUNING
 0.01  15.0  0.1  0.2   2 /
                   /
  12 2 15          /

--WELOPEN
--'*'  SHUT /
--/
TSTEP
243*15
/
TSTEP
1*5
/

