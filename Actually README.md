So to get this all working, first open a new project in Microsoft Visual Studio.
Select the "CLR Empty Project (.NET Framework):

![image](https://github.com/user-attachments/assets/9701f922-fe9f-4eb1-baf3-1d1945f11eaa)

If you dont have it, scroll all the way down and click 'Install more tools and features'.
Let it load then click the 'Desktop Development with C++' tab.
Scroll down into the Optional section and look for 'C++/CLI support for v143 build tools...'.
Download it then open the project.
first things first, right click your project title and hover over add, then new item:


![image](https://github.com/user-attachments/assets/6665c706-7fbe-4ce5-ae26-567668ef4076)


It is probably gonna give you the compact view, click show all templates:


![image](https://github.com/user-attachments/assets/23b6576f-74af-41ed-8399-e260e6e2e663)


Under Visual C++, click UI then Windows Form:


![image](https://github.com/user-attachments/assets/89abcfde-4552-4589-8112-5bd6668b637a)



It will load and give you an error, just close it and re open it from the right under header files.
You will see an empty window titled MyForm, double click the white in the center.
this is the code for the GUI, copy and paste from GUI.h in this github and replace what needs to be by the comments(only the ones on the far right).
Reopen the header design tab and it should update the GUI.
Next, go in the the MyForm.cpp that was auto generated, copy from main.cpp in this github and do the same thing.
Run the program and it should work a-okay.




