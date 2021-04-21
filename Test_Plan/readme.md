## Test Plan
|**TEST ID**|**Description**|**Expected Input**|**Expected Output**|**Actual Out**|**Type of Test**|
| :- | :- | :- | :- | :- | :- |
| HLR_01 | Given string echo’s back | “Echo back the Given String “ passed as a command line argument | “Echo back the Given String” (on serial console (Qemu)) | “Echo back the Given String | Requirement based |
| HLR_02 | PID and PPID of all the running process is to be printed | Invoking executable file of user-space code on serial console | PID, PPID of all the running process. (on terminal)  | PID, PPID of all the running process. | Requirement based |
| HLR_03 | Attributes such as state, priority, PID, PPID of calling process is to be printed | Invoking executable file of user-space code on serial console | PID, PPID, State, Priority of the calling process.  (on terminal)  | PID, PPID, State, Priority of the calling process | Requirement based |
