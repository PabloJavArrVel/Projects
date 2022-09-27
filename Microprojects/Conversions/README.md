# Conversions.py

In our culture we use a numbering system with a base of 10 (decimal), wich means that any number we can imagine can only be made with 10 symbols those being 0-9, however, there are more ways in which we can count things, other cultures like Mayan used a counting system with base 20. Nowadays though the most used system for everyday life is decimal, however other aplications require different systems, for example binary is used to represent any operation a computer performs, hexadecimal is used to label shapes of color and to give adresses to memory locations, and so on. Any system can be converted to other with a set of operations, the process is as follows:

A) From decimal to binary

As the base of the binary system is 2 we need to convert it with divisions, first let's review how we used to divide in kindergarten

<p align="center">
  <img src="https://user-images.githubusercontent.com/110910843/192008621-847c551f-e611-437b-a31e-05bcea91fc8b.png">
</p>

First, we have the dividend, it's located inside the little "home" or box, it represents the number to be divided, then we have the divider located left to our dividend, it represents the number dividing our original number, then we have the quotients, those are the results of our operation located above the box and finally we have our rest or remainder, that's the indicator that will tell us when to stop, whenever it becomes zero we know we've finished, we also need to understand that if we want our result to be an integer then our remainder won't always hit 0, however, our remainder will always be less than our divider. With that in mind, we can convert a decimal value to a binary value with integer divisions, we will divide our original value by two with integer divisions, as the remainder will always be positive and less than 2 we know for sure that it will be either 0 or 1 (the only two symbols in binary, of course), we will continue until our original value hits 0, it will look something like this 

<p align="center">
  <img src="https://user-images.githubusercontent.com/110910843/192010862-40c8a046-758f-42bb-80fc-0a5ed64fc6e1.png">
</p>
Now, as the image strongly suggests, we will "append" our remainder in reverse order and that's it, we've converted a decimal value into binary.

B) From decimal to hexadecimal

As you can imagine, this conversion will follow the same pattern with a little "twist", we change the dividend to 16 and if our remainder is less than 9 then we simply append it but if it's more or equal to 10 then we will need to use the extra symbols of this system those being A-F, it'll look something like this

<p align="center">
  <img src="https://d138zd1ktt9iqe.cloudfront.net/media/seo_landing_files/decimal-to-hexadecimal-1647336473.png">
</p>


C) From hexadecimal to decimal

Now let's do it the opposite way, from hexadecimal to decimal, we know that the hexadecimal system works in base 16, right? We also know that each position represents a value, however, the leftmost element will always hold a higher value so how can we represent mathematically both things? Simple, you first "translate" each symbol to decimal then you assign a "weight" that will represent the importance based on the position of the symbol, that weight will be based on the base of the system, which basically means this: the value of the rightmost element will be multiplied by 16 to the power of 0, then we move to the left value which will be multiplied by 16 to the power of 1 and so on, then the results will be sumed and that's it. At the end it'll look something like this (beware of the mistake sum mistake, the value should be 932)

<p align="center">
  <img src="https://user-images.githubusercontent.com/110910843/192014883-3537fd67-7669-42f7-9942-113aeab7c0a9.png">
</p>

D) From binary to decimal

This conversion follows the same principle, we first translate, then we give each position a weight, multiply each value by its weight and we finally sum, like this.

<p align="center">
  <img src="https://www.w3resource.com/w3r_images/javascript-math-image-exercise-2.svg">
</p>

I could also cover the direct conversion from binary to hexadecimal and the other way around but it doesn't really make sense, why? Well, you can always convert each system to decimal and then convert it to the other system. My algorithm implements these principles to automatize the process, each conversion function has a complexity time of O(e*n), n being obviously the number of elements in the list and e being the length of each element itself.


Corresponding credits
