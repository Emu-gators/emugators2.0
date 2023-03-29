<?php
	$title = "Cheat Guide";
	include("header.php");
?>

  <center><h1>FCE Ultra Cheat Guide</h1></center>
  <center><i>Last updated November 12, 2003<br />Valid as of FCE Ultra 0.97.4</i></center>
<p>
 <b>Table of Contents:</b>
 <ul>
  <li><a href="#intro">Introduction</a>
  <ul>
   <li><a href="#cheatfiles">Cheat Files</a>
  </ul>
  <li><a href="#windows">The Windows Interface</a>
  <ul>
   <li><a href="#windows-search">Cheat Search Interface</a>
  </ul> 
  <li><ba href="#text">The Text Interface(TODO)</ba>
  <li><a href="#examples">Examples</a>
  <ul>
   <li><a href="#examples-mm3">"Mega Man 3" Windows Example</a>
   <li><a href="#examples-oh">"Over Horizon" Text Interface Example</a>
  </ul>
  <li><a href="#tips">Tips</a>
</ul>
<hr width="100%">
<a name="tips"><h2>Introduction</h2></a>
<p>
 FCE Ultra allows cheating by the periodic "patching" of arbitrary addresses
 in the 6502's memory space with arbitrary values, as well as read substitution.
 "Read substitution" is the method that would be used on a real NES/Famicom,
 such as done by the Game Genie and Pro Action Replay.  It is required
 to support GG and PAR codes, but since it is relatively slow when done
 in emulation, it is not the preferred method when a RAM patch will 
 suffice.  Also, in FCE Ultra, read substitution will not work properly with 
 zero-page addressing modes(instructions that operate on RAM at $0000 through
 $00FF).
</p>
<p>
 The RAM patches are all applied a short time before the emulated
 vertical blanking period.  This detail shouldn't concern most people, though.
 However, this does mean that cheating with games that use
 bank-switched RAM may be problematic.  Fortunately, such games are not very
 common(in relation to the total number of NES and Famicom games).
</p>
<a name="cheatfiles"><h3>Cheat Files</h3></a>
<p>
 Cheats are stored in the "cheats" subdirectory under the base FCE Ultra
 directory.  The files are in a simple plain-text format.  Each line represents
 a one-byte memory patch.  The format is as follows(text in brackets [] 
 represents optional parameters):
</p>
<p>
<blockquote>
	[S][C][:]Address(hex):Value(hex):[Compare value:]Description
</blockquote>
  Example:

<blockquote>	040e:05:Infinite super power.</blockquote>
</p>
<p>
 A colon(:) near the beginning of the line is used to disable the cheat.
 "S" denotes a cheat that is a read-substitute-style cheat(such as with Game
 Genie cheats), and a "C" denotes that the cheat has a compare value.
 </p>	

<hr width="100%">
<a name="windows"><h2>The Windows Interface</h2></a>
<p>
 All addresses listed in the cheats window are in unsigned
 16-bit hexadecimal format and all values in these windows are in an
 unsigned 8-bit decimal format(the range for values is 0 through 255).
</p>
<p>
 The cheats window contains the list of cheats for the currently loaded game
 on the right side.  Existing cheats can be selected, edited, and updated
 using the "Update" button.
</p>
<a name="windows-search"><h3>Cheat Search Interface</h3></a>
<p>
 The cheat search interface consists of several components:  a list of
 addresses and associated data for a search, several command buttons,
 and the search parameters.
</p>
<p>
 Each entry in the list is in the format of:
 <blockquote>Address:Original Value:Current Value</blockquote>
</p>
<p>
 The address is the location in the 6502's address space, the original
 value is the value that was stored at this address when the search was
 reset, and the current value is the value that is currently stored at
 that address.  Selecting an item in this list will automatically cause
 the "Address" field in the cheat information box on the right side of the
 window to be updated with the selected address.
</p>
<p>
 The "Reset Search" button resets the search process; all valid addresses
 are displayed in the cheat list and the data values at those addresses noted.
</p>
<p>
 The "Do Search" buttons performs a search based on the search parameters
 and removes any non-matching addresses from the address list.
</p>
<p>
 The "Set Original to Current" button sets the remembered original values
 to the current values.  It is like the "Reset Search" button, but it does
 not affect which addresses are shown in the address list.  This command is
 especially useful when used in conjunction with the "O!=C" search filter.
</p>
<p>
 The "Unhide Excluded" button shows all addresses that are excluded as a
 result of any previous searches.  It is like the "Reset Search" button
 except that it does not affect the remembered original values.
</p>
<p>
 The numbers assigned the names "V1" and "V2" have different meanings based
 on which filter is selected.  A list of the names of the filters and detailed
 information on what they do follows("original value" corresponds to the value
 remembered for a given addres and "current value" is the value currently
 at that address. Also, if a value is not explicitly said to be shown
 under a certain condition, then it is obviously excluded.):
<p>
  "O==V1 && C==V2":
<blockquote>
                 Show the address if the original value is equal to "V1" AND
                 the current value is equal to "V2".
</blockquote>
</p>
<p>
  "O==V1 && |O-C|==V2":
<blockquote>
                 Show the address if the original value is equal to "V1" AND
                 the difference between the current value and the original
                 value is equal to "V2".
</blockquote>
</p>
<p>
  "|O-C|==V2":
<blockquote>
                 Show the address if the difference between the current value
                 and the original value is equal to "V2".
</blockquote>
</p>
<p>
  "O!=C":
<blockquote>
                 Show the address if the original value does not equal the
                 current value.
</blockquote>
</p>
<p>
 The following cheat methods/filters automatically perform the function
 of the "Set Original to Current" button after "Do Search" is pressed.
</p>
<p>
  "Value decreased."
<blockquote>
                 Show the address if the value has decreased.
</blockquote>
</p>
<p>
  "Value increased."
   <blockquote>
                 Show the address if the value has increased.
   </blockquote>
</p>
 
<hr width="100%">
<a name="examples"><h2>Examples</h2></a>
<a name="examples-mm3"><h3>"Mega Man 3" Windows Example</h3></a>
<p>
 This example will give Mega Man unlimited energy.
 Immediately after entering the Top Man stage, make your way to the
 "Add Cheat" window.  Push "Reset Search".
 Go back to playing and move right until the first enemy appears.  Allow
 yourself to be hit twice.  Each hit does "2" damage, so you've lost 4 energy
 bars.  Go to the "Add Cheat" window again and select the third filter
 ("|O-C|==V2") and enter the value 4 next to "V2".  Then push "Do Search".
</p>
<p>
 Several addresses will appear in the address list.  You can try to find
 the address you want through trial and error, or you can narrow the results
 down further.  We will do the latter.
</p>
<p>
 Go back to playing MM3 and get hit one more time and make your way back
 to the "Add Cheat" window.  Your damage is now "6".  You can probably
 see which address that contains your life(it is 00A2).  If not, change
 V2 to 6 and push "Do Search" again.  This should leave only 00A2.
</p>
<p>
 Select that entry in the address list.  Shift your attention to the "Add
 Cheat" box to the right.  Type in a meaningful name and the desired value(156;
 it was the value when you had no damage, so it's safe to assume it's the
 maximum value you can use).  Push the "Add" button and a new entry will
 appear in the cheats list.  The cheat has been added.
</p>
<a name="examples-oh"><h3>"Over Horizon" Text Interface Example</h3></a>
<p>
 This example will give you infinite lives in the NTSC(Japanese) version
 of "Over Horizon".
</p>
<p>
 Start a new game.  Notice that when you press "Start" during gameplay,
 the number of lives you have left is indicated.  With no cheating, you
 start with 3 lives(2 lives left).
</p>
<p>
 Activate the cheat interface immediately after starting a new game.
 Select the "New Cheats" menu and "Reset Search".
</p>
<p>
 I'll assume that the number of lives left shown in the game is the same number
 that's stored in RAM.  Now, "Do Search".  You're going to use the first search
 filter.  For V1, enter the value 2.  For V2, enter the same value.  This, 
 coupled with the fact that you just reset the search, will allow you to search 
 for a value "absolutely"(as opposed to changes in the value).  
</p>
<p>
 Now, "Show Results".  When I did it, I received 11 results:
</p>
<pre>
	 1) $0000:002:002
	 2) $001c:002:002
	 3) $001e:002:002
	 4) $009d:002:002
	 5) $00b9:002:002
	 6) $00e3:002:002
	 7) $0405:002:002
	 8) $0406:002:002
	 9) $0695:002:002
	10) $07d5:002:002	
	11) $07f8:002:002
</pre>
<p>
 You really can't do much yet(unless you want to spend time doing trial
 and error cheat additions).  Return to the game.
</p>
<p>
 After losing a life, go back to the cheat interface, to the "New Cheats"
 menu, and "Show Results".  Here are my results:
</p>
<pre>
	 1) $0000:002:002
	 2) $001c:002:002
	 3) $001e:002:002
	 4) $009d:002:002
	 5) $00b9:002:041
	 6) $00e3:002:002
	 7) $0405:002:001
	 8) $0406:002:002
	 9) $0695:002:002
	10) $07d5:002:001
	11) $07f8:002:002
</pre>
<p>
 Notice that two addresses seem to hold the number of lives($0405 and
 $07d5).  You can lose another life and go "Show Results" again, and you
 should see that $07d5 is the address that holds the number of lives.
</p>
<p>
 Now that you know the address that holds the number of lives, you can
 add a cheat.  You can either type in the number from the cheat results list
 corresponding to the address you want to add a cheat for, or you can
 remember the address and select "Add Cheat" from the "New Cheats" menu.
 Do the former.
</p>
<p>
 Now you will need to enter a name for the cheat.  I suggest something short,
 but descriptive.  "Infinite lives" will work fine.  Next, a prompt for
 the address will show up.  Since you selected an item from the list, you
 can press enter to use the associated address($07d5).  Next, you will
 need to enter a value.  It doesn't need to be large(in fact, it probably
 shouldn't be; abnormally high numbers can cause some games to misbehave).
 I suggest a value of 2.  After this, you should get a prompt that looks like
 this:
</p>
<pre>
   Add cheat "Infinite lives" for address $07d5 with value 002?(Y/N)[N]:
</pre>
<p>
 Answer "Y".  You now have infinite lives.
</p>
<hr width="100%">
<a name="tips"><h2>Tips</h2></a>
<p>
 Games store player information in many different ways.  For example,
 if you have "3" lives in Super Wacky Dodgeball 1989, the game might store
 it in memory as 2, 3, or 4, or perhaps a different number all together.
 Also, say that you have 69 life points out of 200 in Mole Mashers.  The
 game might store how many life points you have, or how much damage you have
 taken. Relative value searches are very valuable because you probably 
 don't know the way that the game stores its player data.
</p>
<p>
 Some games, especially RPGs, deal with individual numbers greater than
 8-bits in size.  Most that I've seen seem to store the multiple-byte data
 least significant byte(lower byte of number) first in memory, though 
 conceivably, it could be stored most significant byte first, or the component 
 bytes of the number could be non-contiguous, though the latter is very unlikely.
 For example, say I have 5304 experience points in Boring Quest for the 
 Overused Plot Device.  To split the number into two eight bit decimal numbers,
 take 5304 %(modulus) 256.  This will give a number that is the lower 8 bits.
 Next, take 5304 / 256.  The integral component of your answer will be the 
 upper 8 bits(or the next 8 bits, if the number is or can be larger than 16 
 bits) of 5304.  Now you will need to search for these numbers.  Fortunately, 
 most(all?) RPGs seem to store large numbers exactly as they are shown in the
 game.
</p>

<?php include("footer.php"); ?>
