PImage img,img2;
void setup()
{
   size(800,700);
   img=loadImage("arknights.png");
}
void draw()
{
  image(img,mouseX,mouseY);
}
