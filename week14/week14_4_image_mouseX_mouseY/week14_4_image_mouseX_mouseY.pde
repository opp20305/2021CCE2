PImage img,img2;
void setup()
{
   size(800,700);
   img=loadImage("arknights.png");
   img2=loadImage("skadi.gif");
}
int dy=0;
void draw()
{
  background(255);
  imageMode(CENTER);
  image(img,mouseX,mouseY);
  if(mousePressed)
  {
     image(img2,mouseX,mouseY-dy);
     dy++;
  }
  else dy=0;
}
