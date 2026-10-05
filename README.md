# Basic-Cipher-Implementation
The project is for encrypting and decrypting data on classical cipher or AES-128 based on user input.
It contains multiple function first one is step_1 which uses a switch to perform s-box conversions for AES-128.
Second is step_2 it is for shifting rows.
Third is step_3 it is for mixing columns and performing operation on the matrix obtained after step_2 function using bitwise operators.
Fourth is step_4 it if for adding key to the matrix obtained after step_3.
Fifth is Decoding_step_1 it is for replacing the inverse s box to the values for decoding it is again using switch statements.
Sixth is for inversing the row shiift.
Seventh is a function created for inversing column mixing which is done in Eighth function.
Eighth function is column reversing using bitwise operator.
Ninth function is for reversing the add key  as it was done in encryption.
Tenth is a function for classical cipher which is Vigenère Cipher  as the key is being added to the ascii value of every character.
Eleventh is for subtracting the key for Vigenère Cipher which was added for decrypting it.
in the main function based on user input the programme can take plain text as well as file.txt for encrypting for both classical and AES-128 cipher.
