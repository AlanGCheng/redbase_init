//
// Created by alan on 6/13/17.
//
class PF_Manager
{
public:
    PF_Manager    ();                           // Constructor
    ~PF_Manager   ();                           // Destructor
    RC CreateFile    (const char *fileName);       // Create a new file
    RC DestroyFile   (const char *fileName);       // Destroy a file
    RC OpenFile      (const char *fileName, PF_FileHandle &fileHandle);
    // Open a file
    RC CloseFile     (PF_FileHandle &fileHandle);  // Close a file
    RC AllocateBlock (char *&buffer);              // Allocate a new scratch page in buffer
    RC DisposeBlock  (char *buffer);               // Dispose of a scratch page
};

RC CreateFile(const char *filename)
{

}