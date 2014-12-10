package source;

import java.util.*;

public class MaxPoints
{
 	public class Point
	{
		int x, y;
		Point(){x = 0; y = 0;}
		Point(int a, int b){x = a; y = b;}
	}
	public int maxPoints(Point[] points)
	{
		if(points == null || points.length == 0)
		{
			return 0;	
		}
		
		HashMap<Double, Integer> map = new HashMap<Double, Integer>();
		int max = 1;

		for(int i = 0; i < points.length; i++)
		{
			map.clear();
			map.put((double)Integer.MAX_VALUE, 1);
			int dup = 0;

			for(int j = i + 1; j < points.length; j++)
			{
				if(points[i].x == points[j].x && points[i].y == points[j].y)
				{
					dup++;
					continue;
				}
				
				double slope = getSlope(points[i], points[j]);
				if(map.containsKey(slope))
				{
					map.put(slope, map.get(slope) + 1);
				}
				else
				{
					map.put(slope, 2);
				}
			}
			
			for(int count : map.values())
			{
				if(max < dup + count)
				{
					max = dup + count;
				}
			}
		}
		return max;
	}

	private double getSlope(Point A, Point B)
	{
		double slope = A.x == B.x ? Integer.MAX_VALUE : 0.0 + (double)(B.y - A.y) / (double)(B.x - A.x);
		return slope; 
	}

	public static void main(String args[])
	{
		MaxPoints mp = new MaxPoints();
		mp.Point a = new mp.Point(1,1);
		mp.Point b = new mp.Point(1,2);
		mp.Point c = new mp.Point(1,3);
		mp.Point d = new mp.Point(1,1);

		Point[] p = new Point[]{a, b, c, d};
		System.out.println("there are at most " + mp.maxPoints(p) + " points in a line");	
		return;
	}
}	
