# Slime Cluster Pattern Finder
## Work in progress C++ Desktop application to search for [slime](https://minecraft.fandom.com/wiki/Slime) chunk patterns in [Minecraft Java Edition](https://www.minecraft.net/)
Special thanks to [TheBjoel2](https://github.com/TheBjoel2/Slime-Chunk-Finder) for providing his Java linear congruential generator code for C++

![image](https://user-images.githubusercontent.com/103208695/169657985-e0364ca4-e80d-4d03-8536-29c3f09c6cdd.png)

## How to use:
1. Enter your world seed
2. Enter chunk radius from 0, 9 where you want to search for the shape, it will search in spiral from 0, 0 to that radius.
3. check mark needed settings like rotating your shape, stopping after first find or allowing noise (will ignore extra slime chunk inside input shape).
4. Draw the shape, don't forget to look at "Probability to find" line in the bottom left corner, if needed increase radius or simplify input shape.
5. Run search!

## Random tests for Dugged's seed 1306145184061456995:
Pickaxe: **Chunk (97150 / 57810)**<br >
![image](https://user-images.githubusercontent.com/103208695/169470690-0a625fa3-7faa-42de-b663-ec08a9f17098.png)

Heart: **Chunk (5743 / -9989)**<br >
![image](https://user-images.githubusercontent.com/103208695/169470775-9ebe1f58-8b1b-4a16-8778-04da80eb893f.png)

Amongus: **Chunk (-34227 / -85398)**<br >
![image](https://user-images.githubusercontent.com/103208695/169470850-327f4dd1-df5c-4895-91e1-ba54a93a65fb.png)

Slime face: **Chunk (-36255 / -13500)**<br >
![image](https://user-images.githubusercontent.com/103208695/169657410-bd3530c5-fa9c-4e71-96c2-92fa84c5fa3c.png)

Checkerboard: **Chunk (-6973 / 3808)**<br >
![image](https://user-images.githubusercontent.com/103208695/169470983-cd834acb-e9d8-42dd-ba82-10e81d77e1cd.png)

Penis: **Chunk (-5998 / -6939)**<br >
![image](https://user-images.githubusercontent.com/103208695/169512370-c91e2978-a7b1-42cb-b532-b402761f5c5c.png)

160m long strip: **Chunk (9902 / 17578)**<br >
![image](https://user-images.githubusercontent.com/103208695/169512458-e9fbf0d1-2cdf-4838-8704-fbb9dad2534b.png)

Gunpowder: **Chunk (-9072 / -488)**<br >
![image](https://user-images.githubusercontent.com/103208695/169657441-6b47b0d8-2e5e-4081-acfd-ad9cbd414024.png)

Squircle: **Chunk (-7540 / -11409)**<br >
![image](https://user-images.githubusercontent.com/103208695/169657514-cad84c0f-d72f-4d15-9a1f-5109572e072d.png)

Doge: **Chunk (2078 / -780)**<br >
![image](https://user-images.githubusercontent.com/103208695/169657554-1460ddaf-2ad1-40de-accd-6a5b96401f35.png)

Checkerboard rhombus: **Chunk (2078 / -780)**<br >
![image](https://user-images.githubusercontent.com/103208695/169657670-000b6101-c642-4c2f-9ae1-e36c5c4c9ea1.png)

# Dependencies
C++/CLR Windows Forms

# License
This program is licensed under the GNU General Public License v3.0. Please read the License file to know about the usage terms and conditions.
