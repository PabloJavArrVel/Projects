# PortSimulator

This program is intended to simulate the following scenario

The Suez Canal is a navigable canal that connects the Mediterranean Sea with the Red Sea for around 190 km, joining the Mediterranean Sea from Port Saíd to the Gulf of Suez in the Red Sea on one side. This channel is navigated between 49 and 97 ships daily. There is a record of the ships that navigate the canal with the following format:

```
<Date> <Hour> <EntryPoint> <UBI-Unique vessel identifier (Identificador único del buque)>
```
Example:
```
03-01-20 13:45 M 8PAK7
```
Where:
* The entry point can be **M – Mediterranean Sea** and **R – Red Sea**.
* The date format will be between **01-JAN-2020** and **31-DIC-2020**.
* The time format will be 24h.

## <span style="color: rgb(26, 99, 169);">**Input**</span>
The first line of input contains two elements: an integer *n*, the number of ships that have entered the channel, and a string of 3 three characters *prefix*, the prefix of the UBI to search for. The next *n* lines; contains the record of the ships that have entered the canal with the format described above.

## <span style="color: rgb(26, 99, 169);">**Salida**</span>
The program displays the recordes which UBI starts with *prefix*, sorted by date and hour.

## <span style="color: rgb(26, 99, 169);">**Input example**</span>
```
16 2HU
01-01-20 00:17 R 2HUN5
01-01-20 00:37 R 2AET2
01-01-20 00:57 M 2HUQ5
01-01-20 01:17 M 2FRW0
01-01-20 01:37 M 4MXV8
01-01-20 01:57 R 2HUG7
01-01-20 02:17 R 1KIH9
01-01-20 02:37 R 2HUX2
01-01-20 02:57 M 3CFE2
01-01-20 03:17 R 1TLD0
01-01-20 03:37 R 3FRF4
01-01-20 03:57 R 2HUK8
01-01-20 04:17 M 0CFR7
01-01-20 04:37 R 0TQL9
01-01-20 04:57 R 2HUS4
01-01-20 05:17 R 0FRX0
```

## <span style="color: rgb(26, 99, 169);">**Output example**</span>
```
01-01-20 00:17 R 2HUN5
01-01-20 00:57 M 2HUQ5
01-01-20 01:57 R 2HUG7
01-01-20 02:37 R 2HUX2
01-01-20 03:57 R 2HUK8
01-01-20 04:57 R 2HUS4
```
