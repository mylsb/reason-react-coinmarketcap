type direction =
  | Asc
  | Desc;

let component = ReasonReact.statelessComponent("Direction");

let toggle = direction =>
  switch direction {
  | Asc => Desc
  | Desc => Asc
  };

let toString = direction =>
  switch direction {
  | Asc => "asc"
  | Desc => "desc"
  };

let make = (~direction, _children) => {
  ...component,
  render: _self =>
    switch direction {
    | Asc =>
      <svg viewBox="0 0 871.25 614.829">
        <path
          fill="white"
          stroke="white"
          d="M217.816 274.045L0 56.226l28.134-28.113L56.268 0l189.996 189.992 189.995 189.993 189.694-189.69L815.646.605l27.802 27.822L871.25 56.25 653.44 274.056 435.632 491.863 217.816 274.045z"
        />
      </svg>
    | Desc =>
      <svg viewBox="0 0 876.25 626.562">
        <path
          fill="white"
          stroke="white"
          d="M30.928 470.303C13.918 453.283 0 438.798 0 438.115 0 436.485 436.498 0 438.128 0c1.64 0 438.122 436.496 438.122 438.136 0 1.631-60.25 61.864-61.883 61.864-.681 0-85.474-84.234-188.428-187.186L438.75 125.628 250.936 313.44C147.638 416.735 62.837 501.25 62.489 501.25c-.348 0-14.55-13.926-31.56-30.947z"
        />
      </svg>
    }
};