[%bs.raw {|require('./NavBar.css')|}];

module NavItem = {
  [@react.component]
  let make = (~label, ~to_) => {
    <Link
      className="Navbar-linkLabel"
      labelClassName="Navbar-linkLabel"
      label
      to_
    />;
  };
};

[@react.component]
let make = (~className) => {
  <nav className={"NavBar " ++ className}>
    <NavItem label="Workshops" to_="/" />
    <NavItem label="Speakers" to_="/" />
    <NavItem label="Sponsors" to_="/" />
    <NavItem label="Schedule" to_="/" />
    <NavItem label="Contact" to_="/" />
    <TicketsButton />
  </nav>;
};