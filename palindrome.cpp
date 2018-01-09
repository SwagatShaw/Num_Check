int func_palindrome()
{
     int n, a, digit, rev = 0;

     cout << "Enter a positive number: ";
     cin >> a;

     n = a;

     do
     {
         digit = a % 10;
         rev = (rev * 10) + digit;
         a = a / 10;
     } while (a != 0);

     cout << " The reverse of the number is: " << rev << endl;

     if (n == rev)
         cout << " The number is a palindrome";
     else
         cout << " The number is not a palindrome";

    return 0;
}
