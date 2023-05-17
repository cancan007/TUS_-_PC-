reset
set output
set terminal postscript eps enhanced color"Times-Roman"25
set output "vc1.eps"  #ここ変える
set grid
set xlabel "Time[msec]"
set ylabel "Voltage[V]"
set xrange [0:10]
set yrange [-0.1:1.1]
set xtics 1
set ytics 0.1
#set key right top
set title "h=0.00001, vc" #ここ変える
plot "h1.dat" using 1:4 title "Euler" w l linewidth 1 , \
     "h1.dat" using 1:5 title "Theoretical value" w l linewidth 1
#"sp,k0=03,k=02.dat"using1:($5/$2)title"k=0.2"with line linewidth4
#x2y
set output