use 5.010;
use strict;
use warnings;



chomp (my $s = scalar <>);
say "s = <$s>";
my ($n, $k)  = split /\s/, $s;
chomp($s = <>);
my @n = split /\s/, $s;
@n = reverse sort @n;

say "n=$n\nk=$k";
say for "<", @n, ">";


my %h;
my $count =0;
for my $i (@n){
	if ( $i % $k || not exists $h{$i/$k} ) {
		$h{$i} = 1;
		$count++;
	}
}
say $count;
