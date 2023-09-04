# Windows-Auto-Shutdown
![main](https://i.ibb.co/fFMpc5b/image.png)

Hide the Command Prompt (CMD) Window: It uses the ShowWindow(GetConsoleWindow(), SW_HIDE); function to hide the Command Prompt window.

Custom Code Execution: It defines a function called CodigoPersonalizado() which, after hiding the CMD window, executes a system command to shut down the computer. The shutdown command used is C:\\windows\\system32\\shutdown /s /f /t 0, which initiates an immediate system shutdown (/s), forces running applications to close (/f), and specifies a timeout of 0 seconds (/t 0).

Auto-Start Configuration: In the main() function, it retrieves the path of the current program and adds an entry to the Windows Registry under HKEY_CURRENT_USER\Software\Microsoft\Windows\CurrentVersion\Run. This registry entry is named "PC Restart" and contains the path of the program. As a result, the program will be automatically started each time the user logs into Windows.

The main purpose of this code appears to be to create a self-replicating program that runs at startup and immediately shuts down the computer. Please note that such code can be considered malicious and may be flagged by antivirus software. Additionally, modifying the Windows Registry should be done with caution, as it can affect system stability and security.
